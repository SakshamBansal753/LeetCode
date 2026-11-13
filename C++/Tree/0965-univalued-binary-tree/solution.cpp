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
bool check(TreeNode*root,int v){
    if(!root) return true;
    if(!root->left&&!root->right){
        return root->val==v;
    }
    return (check(root->left,v)&&check(root->right,v)&&root->val==v);
}
    bool isUnivalTree(TreeNode* root) {
        if(!root){
            return true;
        }
        return check(root,root->val);
    }
};

