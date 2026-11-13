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
TreeNode*del(TreeNode*root,int key){
    if(!root) return NULL;
    if(root->val>key){
        root->left=del(root->left,key);
    }else if(root->val<key){
        root->right=del(root->right,key);
    }else{
        if(root->left==NULL){
            TreeNode*temp=root->right;
            delete root;
            return temp;
        }else if(root->right==NULL){
            TreeNode*temp=root->left;
            delete root;
            return temp;
        }else{
            TreeNode*IS=inorder(root->right);
            root->val=IS->val;
            root->right=del(root->right,IS->val);
        }
    }
    return root;
}
TreeNode*inorder(TreeNode*root){
    while(root&&root->left){
        root=root->left;
    }
    return root;
}
    TreeNode* deleteNode(TreeNode* root, int key) {
        return del(root,key);
    }
};