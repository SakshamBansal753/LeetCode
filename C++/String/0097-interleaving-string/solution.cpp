class Solution {
public:
    int n1,n2,n3;
    //memo
    bool function(int i,int j,string &s1,string &s2,string &s3,vector<vector<int>>&dp){
        if(i==n1&&j==n2) return true;
        if(dp[i][j]!=-1) return dp[i][j];
        bool t1=false,t2=false;
        if(i<n1&&s1[i]==s3[i+j])  t1= function(i+1,j,s1,s2,s3,dp);
        if(j<n2&&s2[j]==s3[i+j])  t2= function(i,j+1,s1,s2,s3,dp);
       return dp[i][j]=t1||t2;
    }
    bool isInterleave(string s1, string s2, string s3) {
         n1=s1.length();
         n2=s2.length();
         n3=s3.length();
        if(n1+n2!=n3) return false;

        vector<vector<int>>dp(n1+1,vector<int>(n2+1,0));
        dp[0][0]=1;
        for (int i = 1; i <= n1; i++) {
            dp[i][0] = dp[i-1][0] &&
                       (s1[i-1] == s3[i-1]);
        }
        for (int j = 1; j <= n2; j++) {
            dp[0][j] = dp[0][j-1] &&
                       (s2[j-1] == s3[j-1]);
        }
        for(int i=1;i<n1+1;i++){
            for(int j=1;j<n2+1;j++){
                dp[i][j]=(dp[i-1][j]&&s1[i-1]==s3[i+j-1])||(dp[i][j-1]&&s2[j-1]==s3[i+j-1]);
            }
        }
        return dp[n1][n2];
    }
};