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
    int ans=0;
    int helper(TreeNode*root){
        if(!root){
            return 0;
        }
        int lefte=helper(root->left);
        int righte=helper(root->right);
        ans=max(ans,lefte+righte);
        return max(lefte,righte)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int k=helper(root);
        return ans;
    }
};