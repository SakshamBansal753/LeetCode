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
void helper(TreeNode*root,int &sum,int x){
    if(!root){
        return ;
    }
    x=x*10+root->val;
    if(!root->left&&!root->right){
        sum+=x;
    }
    helper(root->left,sum,x);
    helper(root->right,sum,x);
    
}
    int sumNumbers(TreeNode* root) {
        int sum=0;
        helper(root,sum,0);
        return sum;
    }
};