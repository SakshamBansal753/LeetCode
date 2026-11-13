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
 void helper(TreeNode*r1,TreeNode *r2,int n){
    if(!r1||!r2){
        return ;
    }
    if(n%2!=0){
        int temp=r1->val;
        r1->val=r2->val;
        r2->val=temp;
    }
    helper(r1->left,r2->right,n+1);
    helper(r1->right,r2->left,n+1);

 }
    TreeNode* reverseOddLevels(TreeNode* root) {
        helper(root->left,root->right,1);
        return root;
    }
};