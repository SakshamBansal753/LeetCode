class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int n=nums.size();
        int lsum=0,rsum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<k;i++){
            lsum+=nums[i];
            rsum+=nums[n-i-1];
        }
        return abs(rsum-lsum);
    }
};