class Solution {
public:
    int fxn(int i,int j,vector<vector<int>>&dp,vector<int>&cuts){
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int mini=INT_MAX;
        for(int ind=i;ind<=j;ind++){
            int cut=cuts[j+1]-cuts[i-1]+fxn(i,ind-1,dp,cuts)+fxn(ind+1,j,dp,cuts);
            mini=min(mini,cut);

        }
        return dp[i][j]=mini;
    }
    int minCost(int n, vector<int>& cuts) {
        cuts.push_back(n);
        cuts.insert(cuts.begin(),0);
        sort(cuts.begin(),cuts.end());
        int m = cuts.size();
        vector<vector<int>>dp(m+1,vector<int>(m+1,-1));
        return fxn(1,m-2,dp,cuts);
    }
};