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
int sum=0;
void helper(TreeNode*root,int l,int h){
    if(!root) return ;
    if(l>h){
        return ;
    }
    
   
    if(root->val>=l&&root->val<=h){
        sum+=root->val;
    }
  if(root->val>=l){
    helper(root->left,l,h);
  }
  if(root->val<=h){
    helper(root->right,l,h);
  }
}
    int rangeSumBST(TreeNode* root, int low, int high) {
        helper(root,low,high);
        return sum;
    }
};