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
    typedef vector<int> State;
    unordered_map<TreeNode*, State> dp;
    int dfs(TreeNode*root ,int b){
        if(!root) return 0;
        if(b==1) return dp[root][b]=dfs(root->left,0)+dfs(root->right,0);
        if(dp.count(root)&&dp[root][b]!=-1) return dp[root][b];
        if (!dp.count(root))
            dp[root] = State(2, -1);
        int notpick=dfs(root->left,0)+dfs(root->right,0);
        int pick=0;
        pick=dfs(root->right,1)+dfs(root->left,1)+root->val;
        return dp[root][b]=max(pick,notpick);
    }
    int rob(TreeNode* root) {
        
        return dfs(root,0);
    }
};