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
int order=0;

    int kthSmallest(TreeNode* root, int k) {
            if(!root){
                return -1;
            }
            if(root->left){
                int lA=kthSmallest(root->left,k);
                if(lA!=-1) return lA;
               
            }
            if(order+1==k){
                return root->val;
            }
            order+=1;
            if(root->right){
                int rA=kthSmallest(root->right,k);
                if(rA!=-1) return rA;
            }
            return -1;

    }
};