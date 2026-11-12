class Solution {
public:
    int soln(vector<vector<char>>&matrix,int n,int m,int i,int j,vector<vector<int>>&dp){
        if(i<0||j<0||i>=n||j>=m||matrix[i][j]=='0') return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=min({soln(matrix,n,m,i-1,j-1,dp),soln(matrix,n,m,i-1,j,dp),soln(matrix,n,m,i,j-1,dp)})+1;
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int maxi = 0;
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        for (int i = 0; i < n; i++) {   
            for (int j = 0; j < m; j++) {
                maxi = max(maxi, soln(matrix,n,m, i, j,dp));
            }
        }
        return maxi*maxi;
    }
};