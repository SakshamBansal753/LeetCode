class Solution {
public:
    int f(int i,int n,string s, vector<int>&dp){
        if(i==n) return 1;
        if(s[i]=='0') return 0;
        if(dp[i]!=-1) return dp[i];
        int ans=0;
        if(i+1<n){
        string temp=s.substr(i,2);
        if(temp>="10"&&temp<="26"){
            ans+= f(i+2,n,s,dp);
        }
        }
        if (s[i] >= '1' && s[i] <= '9') {
            ans += f(i + 1, n, s,dp);
        }
        return dp[i]=ans;
    }
    int numDecodings(string s) {
        int n=s.length();
        vector<int>dp(n+1,0);
        dp[n]=1;
        for(int i=n-1;i>=0;i--){
            int ans=0;
            if(s[i]=='0'){dp[i]=0;
            continue;
            }
            else if(i+1<n){
                string temp=s.substr(i,2);
                if(temp>="10"&&temp<="26"){
                    ans+= dp[i+2];
                }
            }ans += dp[i + 1];
            dp[i]=ans;
        }
        return dp[0];
    }
};