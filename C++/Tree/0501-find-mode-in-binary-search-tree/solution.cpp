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

   unordered_map<int ,int>map;
   int maxfreq=0;
   void Helper(TreeNode*root){
    if(root){
        map[root->val]++;
        maxfreq=max(maxfreq,map[root->val]);
        Helper(root->left);
        Helper(root->right);
    }
   }


    
    vector<int> findMode(TreeNode* root) {
        if(!root){
            return {};
        }
       Helper(root);
       vector<int>ans;
       for(auto& [val,fre] :map){
        if(fre==maxfreq){
            ans.push_back(val);
        }
       }
       return ans;
        
    }
};