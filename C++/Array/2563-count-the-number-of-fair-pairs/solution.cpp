class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int n=nums.size();
        long long ans=0;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            int mini=lower-nums[i];
            int maxi=upper-nums[i];
            int lb=lower_bound(nums.begin()+i+1,nums.end(),mini)-nums.begin();
            int rb=upper_bound(nums.begin()+i+1,nums.end(),maxi)-nums.begin();
            ans+=(rb-lb);
        }
        return ans;
    }
};