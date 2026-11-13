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
int cnt=0;
void helper(TreeNode*root,int val1){
    if(!root){
        return ;
    }
    if(val1<=root->val){
        val1=root->val;
        cnt++;
    }
   
    helper(root->left,val1);
    helper(root->right,val1);
}
    int goodNodes(TreeNode* root) {
        helper(root,INT_MIN);
        return cnt;
    }
};