class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        
        int totals=0;
        for(int num:nums) totals+=num;
        if (totals % 2 != 0) return false;
        int m=totals/2;
        vector<vector<bool>>dp(n,vector<bool>(m+1,false));
        
        for(int i=0;i<n;i++)dp[i][0]=true;
        if(nums[0]<=m)dp[0][nums[0]]=true;
        for(int i=1;i<n;i++){
            for(int k=0;k<=m;k++){
                bool nottake=dp[i-1][k];
                bool take=false;
                if(nums[i]<=k) take=dp[i-1][k-nums[i]];
                dp[i][k]=nottake|take;
            }
       
    }
    return dp[n-1][m];
    }
};