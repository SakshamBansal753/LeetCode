class Solution {
public:
    int rec(vector<int>&nums,int i,vector<int>&dp){
      if(i<0){
        return 0;
      }
      if(dp[i]!=-1) return dp[i];
      int curr=nums[i];
      int currsum=nums[i];
      int index=i-1;
      int removal=nums[i]-1;
      while(index>=0&&nums[index]==curr){
        index--;
        currsum+=nums[i];
      }
      while(index>=0&&nums[index]==removal){
        index--;

      }
      return dp[i]=max(currsum+rec(nums,index,dp),rec(nums,i-1,dp));
      
    }
    int deleteAndEarn(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>dp(n+1,-1);
        return rec(nums,nums.size()-1,dp);
    }
};