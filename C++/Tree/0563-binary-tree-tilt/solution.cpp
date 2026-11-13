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
int value(TreeNode*root,int  & o){
    if(root==NULL){
        return 0;
    }
    int l=value(root->left,o);
    int r=value(root->right,o);
    int x=abs(l-r);
    o+=x;
    return r+l+root->val;

}
    int findTilt(TreeNode* root) {
      int y=0;
      value(root,y);
      return y;
        

        
    }
};