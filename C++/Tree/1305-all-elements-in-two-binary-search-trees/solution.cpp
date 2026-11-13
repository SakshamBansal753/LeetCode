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
    void inorder(TreeNode*root,vector<int>&t){
        if(!root) return ;
        inorder(root->left,t);
        t.push_back(root->val);
          inorder(root->right,t);
          return;
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>t1,t2;
            inorder(root1,t1);
            inorder(root2,t2);
        int i=0,j=0;
        vector<int>ans;
        while(i<t1.size()&&j<t2.size()){
            if(t1[i]<=t2[j]){
                ans.push_back(t1[i]);
                i++;
            }else{
                  ans.push_back(t2[j]);
                j++;
            }
        }
        while(i<t1.size()){
            ans.push_back(t1[i]);
                i++;
        }
        while(j<t2.size()){
              ans.push_back(t2[j]);
                j++;
        }
        return ans;
        
    }
};