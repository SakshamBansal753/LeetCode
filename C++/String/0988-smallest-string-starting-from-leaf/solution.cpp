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
    
    void helper(TreeNode*root,string s,string &ans){
        if(!root){
            return;
        }
        s+=char('a'+root->val);
        if(!root->left&&!root->right){
            reverse(s.begin(),s.end());
            if(ans.empty()||s<ans){
                ans=s;
            }
            reverse(s.begin(),s.end());
            return;
        }
            helper(root->left,s,ans);
            helper(root->right,s,ans);
      
        
    }
    string smallestFromLeaf(TreeNode* root) {
        string ans="";
        helper(root,"",ans);
        return ans;
    }
};