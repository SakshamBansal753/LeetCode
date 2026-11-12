class Solution {
public:
    int dfs(vector<int>&nums,int l,int r,int n,vector<vector<int>>&dp){
        if(l>r) return 0;
        if(dp[l][r]!=-1) return dp[l][r];

        int sum=0;
        for(int i=l;i<=r;i++){
           int coins=nums[l-1]*nums[i]*nums[r+1];
           coins+=dfs(nums,l,i-1,n,dp);
           coins+=dfs(nums,i+1,r,n,dp);
           sum=max(sum,coins);
           dp[l][r]=sum;
        }
        return dp[l][r];
    }
    int maxCoins(vector<int>& nums) {
        nums.insert(nums.begin(), 1);
        nums.push_back(1);

        int n = nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));

        return dfs(nums,1,n-2,n,dp);
    }
};