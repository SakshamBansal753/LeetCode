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
int count (TreeNode*root){
    if(!root) return 0;
    return count(root->left)+count(root->right)+1;
}
 bool helper(TreeNode*root,int n,int k){
    if(!root){
        return true;
    }
    if(k>=n){
        return false;
    }
    return helper(root->left,n,(2*k)+1)&&helper(root->right,n,(2*k)+2);
 }
    bool isCompleteTree(TreeNode* root) {
        int cnt=count(root);
    return helper(root,cnt,0);
    }
};