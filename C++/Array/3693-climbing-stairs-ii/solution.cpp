class Solution {
public:
    int soln(vector<int>&costs,int i,vector<int>&dp){
        if(i==0) return 0;
        if (i < 0) return 1e9;
        if(dp[i]!=-1) return dp[i];
        int cost=1e9;
        for(int j=1;j<=3;j++){
            int prev=i-j;
            int anscost=1e9;
            if(prev>=0){
                anscost=costs[i-1]+soln(costs,prev,dp)+(i-prev)*(i-prev);
            }
            cost=min(anscost,cost);
        }
        return dp[i]=cost;

    }
    int climbStairs(int n, vector<int>& costs) {
        vector<int>dp(n+1,-1);
       return soln(costs,n,dp);
    }
};