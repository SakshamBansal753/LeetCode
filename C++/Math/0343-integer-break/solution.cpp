class Solution {
public:
    int solve(int i,int n,vector<int>&dp){
        if(n==0 or i==0) return 1;
        if(i>n) return dp[i]= solve(i-1,n,dp);
        return dp[i]=max({i*solve(i,n-i,dp),solve(i-1,n,dp)});
    }
    int integerBreak(int n) {
        vector<int>dp(n+1);
        return solve(n-1,n,dp);
    }
};