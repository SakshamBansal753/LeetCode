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
TreeNode* helper(TreeNode*root,TreeNode*prev){
    if(!root){
        return prev;
    }
    TreeNode*res=helper(root->left,root);
    root->left=NULL;
    root->right=helper(root->right,prev);
    return res;
}
    TreeNode* increasingBST(TreeNode* root) {
  return helper(root,NULL);
       
        
    }
};