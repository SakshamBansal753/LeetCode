class Solution {
    private:
    long long mod=2*10e9;
public:

    int uniquePathsWithObstacles(vector<vector<int>>& oG) {
        int m=oG.size();
        int n=oG[0].size();
        vector<vector<int>>dp(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int up=0,down=0;
                if(oG[i][j]==1)dp[i][j]=0;
                else if(i==0&&j==0)dp[i][j]=1;
                else{
                    if(i>0) up=dp[i-1][j];
                    if(j>0)down=dp[i][j-1];
                    dp[i][j]=(up+down)%mod;
                }
            }
        }
        return dp[m-1][n-1];
    }
};