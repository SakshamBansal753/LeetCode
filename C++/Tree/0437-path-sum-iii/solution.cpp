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
    int ans = 0;
    void backtrack(TreeNode* root, int target, long long sum, unordered_map<long long, int>& mp) {
        if (root == NULL) return;
        sum += root->val;
        if (mp.count(sum - target)) {
            ans += mp[sum - target];
        }
        mp[sum]++;
        backtrack(root->left, target, sum, mp);
        backtrack(root->right, target, sum, mp);

        mp[sum]--;
    }
    
    int pathSum(TreeNode* root, int targetSum) {
        unordered_map<long long, int> mp;
        mp[0] = 1; 
        backtrack(root, targetSum, 0, mp);
        return ans;
    }
};