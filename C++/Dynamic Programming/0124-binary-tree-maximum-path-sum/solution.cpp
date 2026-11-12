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
int helper(TreeNode*root,int &res){
   if(!root){
    return 0;
   }
   int leftsum=helper(root->left,res);
   if(leftsum<0){
    leftsum=0;
   }
   int rightsum=helper(root->right,res);
   if(rightsum<0){
    rightsum=0;
   }
   res=max(res,leftsum+rightsum+root->val);
   return max(leftsum,rightsum)+root->val;

}
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        helper(root,ans);
        return ans;
    }
};