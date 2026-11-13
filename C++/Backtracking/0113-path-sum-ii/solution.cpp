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
    void helper(TreeNode*root,int ts,vector<int>&ans,vector<vector<int>>&v,int curr){
        if(!root){
            return;
        }
       curr+=root->val;
       ans.push_back(root->val);
       if(!root->left&&!root->right&&curr==ts){
        v.push_back(ans);
       }
       helper(root->left,ts,ans,v,curr);
        helper(root->right,ts,ans,v,curr);
        ans.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>a;
        vector<vector<int>>ans;
        helper(root,targetSum,a,ans,0);
        return ans;
    }
};