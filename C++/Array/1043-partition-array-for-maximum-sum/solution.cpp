class Solution {
public:
    int soln(vector<int>&arr,int k,int i,vector<int>&dp){
        int n=arr.size();
        if(i==n) return 0;
        if(dp[i]!=-1)return dp[i];
        int maxans=0;
        int len=0,maxi=INT_MIN;
        for(int j=i;j<min(n,i+k);j++){
            len++;
            maxi=max(maxi,arr[j]);
            int sum=(len*maxi)+soln(arr,k,j+1,dp);
            maxans=max(maxans,sum);
        }
        return dp[i]= maxans;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>dp(n+1,-1);
        return soln(arr,k,0,dp);
    }
};