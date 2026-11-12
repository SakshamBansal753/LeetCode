class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,1e9));
        for(int t=0;t<amount+1;t++){
            if(t%coins[0]==0)
                dp[0][t]=t/coins[0];            
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<amount+1;j++){
                int notake=dp[i-1][j];
                int take=1e9;
                if(coins[i]<=j) take=1+dp[i][j-coins[i]];
                dp[i][j]=min(take,notake);
            }
        }
        int ans=dp[n-1][amount];
        return ans>=1e9?-1:ans;
    }
};