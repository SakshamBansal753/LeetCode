class Solution {
public:
    int solve(int i, int j, string& s) {
        int cnt = 0;

        while (i < j) {
            if (s[i] != s[j])
                cnt++;
            i++;
            j--;
        }

        return cnt;
    }
 bool isplaindrome(long long i,long long j,string &s){
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }

    int part(int i ,int parts,int k ,string &s,vector<vector<int>>&dp){
        int n = s.length();
        if(parts==k-1){
            return isplaindrome(i,n-1,s)?0:solve(i,n-1,s);
        }
        if(dp[i][parts]!=-1) return dp[i][parts];
        int minc=INT_MAX;
        for(int j=i;j<n-k+parts+1;j++){
            int cost=0;
            if(isplaindrome(i,j,s)){
               cost=part(j+1,parts+1,k,s,dp);
            }else{
                 cost=solve(i,j,s)+part(j+1,parts+1,k,s,dp);
            }
            minc=min(minc,cost);
        }
        return dp[i][parts]=minc;

    }
    int palindromePartition(string s, int k) {
        int n=s.length();
        vector<vector<int>>dp(n,vector<int>(k+1,-1));
        return part(0,0,k,s,dp);
    }
};