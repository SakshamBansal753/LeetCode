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
void vectorfill(TreeNode*root,vector<int>&lef){
    if(!root) return;
    if(!root->left&&!root->right){
        lef.push_back(root->val);
        return;
    }
    vectorfill(root->left,lef);
    vectorfill(root->right,lef);
    return;
}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
      vector<int>l1,l2;
      vectorfill(root1,l1);
      vectorfill(root2,l2);
      return l1==l2;
    }
};