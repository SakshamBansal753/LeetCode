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
int depth(TreeNode *root,int y,TreeNode*&Parent){

    if (root == nullptr)
            return -1;
   if ((root->left&&root->left->val==y)||(root->right && root->right->val == y)) {
            Parent = root;
            return 1;
        }
   
int left=depth(root->left,y,Parent);
if(left!=-1) return 1+left;
int right=depth(root->right,y,Parent);
if(right!=-1) return 1+right;
return -1;

}
    bool isCousins(TreeNode* root, int x, int y) {
        if (root == nullptr || root->val == x || root->val == y) return false;

        TreeNode *Parent1=NULL;
        TreeNode*Parent2=NULL;
        int m=depth(root,x,Parent1);
        int j=depth(root,y,Parent2);
        return m==j&&Parent1!=Parent2;
    }
};