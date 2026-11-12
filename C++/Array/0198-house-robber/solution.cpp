class Solution {
public:
    int soln(vector<int>&nums,vector<int>&dp,int i){
        if(i==0)return nums[0];
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];
        int notpick=soln(nums,dp,i-1);
        int pick=nums[i]+soln(nums,dp,i-2);
        return dp[i]=max(notpick,pick);
        
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return soln(nums,dp,n-1);
    }
};