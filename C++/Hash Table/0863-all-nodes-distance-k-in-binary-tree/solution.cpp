/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int>ans;
    void find(TreeNode*root,int k){
        if(!root||k<0){
            return;
        }
        if(k==0){
            ans.push_back(root->val);
            return;
        }
        find(root->left,k-1);
        find(root->right,k-1);
    }
    void dfs(TreeNode*root,TreeNode*target,int k,int& distance, bool& found){
        if(!root){
            return;
        }
        if(root==target){
            distance=0;
            found=true;
            find(root,k);
            return;
        }
        dfs(root->left,target,k,distance,found);
        if(found){
            distance++;
            if(distance==k){
                ans.push_back(root->val);
            }
            find(root->right,k-distance-1);
            return;
        }
        dfs(root->right,target,k,distance,found);
        if(found){
            distance++;
            if(distance==k){
                ans.push_back(root->val);
            }
            find(root->left,k-distance-1);
            return;
        }
        return;
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        bool found=false;
        int distance=k;
        dfs(root,target,k,distance,found);
        return ans;
    }
};