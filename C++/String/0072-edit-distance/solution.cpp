class Solution {
public:
    string s,t;
    int n,m;
    int rec(int i,int j,vector<vector<int>>&dp){
       
        if(i==-1) return j+1;
        if(j==-1) return i+1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j]) return dp[i][j]=rec(i-1,j-1,dp);
        else

        return dp[i][j]= min({1+rec(i-1,j,dp),1+rec(i,j-1,dp),1+rec(i-1,j-1,dp)});
    }
    int minDistance(string word1, string word2) {
        s=word1;
        t=word2;
        n=s.length();
        m=t.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return rec(n-1,m-1,dp);
    }
};