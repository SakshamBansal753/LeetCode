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
priority_queue<pair<int, pair<int,int>>,vector<pair<int, pair<int,int>>>,greater<pair<int, pair<int,int>>>> pq;
    void helper(TreeNode*root,int r,int c){
        if(!root){
            return;
        }
        pq.push({c,{r,root->val}});
        helper(root->left,r+1,c-1);
        helper(root->right,r+1,c+1);

    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        helper(root,0,0);
        int prevcol=INT_MIN;
        while(!pq.empty()){
            auto[c,r]=pq.top();
            pq.pop();
            int row=r.first;
            int val=r.second;
            if(c!=prevcol){
                ans.push_back({});
                prevcol=c;
            }
            ans.back().push_back(val);
        }
        return ans;

    }
};