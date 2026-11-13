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
    TreeNode* constructbt(vector<int>&n,int l,int r){
        if(l==r){
            return NULL;
        }
         int m=max(n,l,r);
         TreeNode*root=new TreeNode(n[m]);
         root->left=constructbt(n,l,m);
         root->right=constructbt(n,m+1,r);
         return root;

    }
    int max(vector<int> &n,int l,int r){
        int mi=l;
        for(int i=l;i<r;i++){
            if(n[mi]<n[i]){
                mi=i;
            }
        }
        return mi;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return constructbt(nums,0,nums.size());
    }
};