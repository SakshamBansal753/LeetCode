class Solution {
public:
    int n=0;
    int lis(vector<int>&nums,int ind,int prev,vector<vector<int>>&dp){
        if(ind==n) return 0;
        if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];
        int len=lis(nums,ind+1,prev,dp);
        if(prev==-1||nums[ind]>nums[prev]){
            len=max(len,1+lis(nums,ind+1,ind,dp));
        }
        return dp[ind][prev+1]=len;
    }
    // int lengthOfLIS(vector<int>& nums) {
    //      n=nums.size();
    //     vector<vector<int>>dp(n+1,vector<int>(n+1,0));
    //     for(int i=n-1;i>=0;i--){
    //         for(int prev=i-1;prev>=-1;prev--){
    //             int len=dp[i+1][prev+1];
    //             if(prev==-1||nums[i]>nums[prev]){
    //                 len=max(len,1+dp[i+1][i+1]);
    //             }
    //             dp[i][prev+1]=len;

    //         }
    //     }
    //     return dp[0][0];
        
    // }
    int lengthOfLIS(vector<int>& nums) {
         n = nums.size();
        vector<int> dp(n, 1);
        int ans = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[j] < nums[i]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            ans = max(ans, dp[i]);
        }
        return ans;
    }

};