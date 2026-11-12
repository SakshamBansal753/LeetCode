class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        int currmin=nums[0];
        int ans=nums[0];
        int currmax=nums[0];
        for(int i=1;i<n;i++){
            int temp=currmax;
            currmax=max(temp*nums[i],max(currmin*nums[i],nums[i]));
            currmin=min(temp*nums[i],min(currmin*nums[i],nums[i]));
            ans=max(ans,currmax);
        }
        return ans;

    }
};