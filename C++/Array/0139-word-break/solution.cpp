class Solution {
public:
    set<string>word;
    bool rec(int i,string s,int n, vector<int>&dp){
        if(i==n){
            return true;
        }
        if(dp[i]!=-1) return dp[i];
        for(int j=i;j<n;j++){
            string temp=s.substr(i,j-i+1);
            if(word.find(temp)!=word.end()){
                  if (rec(j + 1, s, n,dp)) {
                   return dp[i]=1;
                  }
            }
        }
        return dp[i]=0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {

        for(string k:wordDict){
            word.insert(k);
        }
        int n=s.length();
        vector<int>dp(n+1,-1);
        return rec(0,s,n,dp);
    }
};