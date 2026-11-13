/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int h(TreeNode*root){
    if(!root){
        return 0;
    }
    return max(h(root->left),h(root->right))+1;
}
void helper(TreeNode*root,long long l,long long r,vector<vector<string>>&x,int i){
   if (!root || l > r) return;
    int mid = (l + r) / 2;
    x[i][mid]=to_string(root->val);
    helper(root->left,l,mid-1,x,i+1);
    helper(root->right,mid+1,r,x,i+1);
    
}
    vector<vector<string>> printTree(TreeNode* root) {
        int height=h(root);
        long long r=height;
        long long c=pow(2,height)-1;
        vector<vector<string>>x(r,vector<string>(c,""));
        vector<string>ans;
        helper(root,0,c-1,x,0);
        return x;
    }
};