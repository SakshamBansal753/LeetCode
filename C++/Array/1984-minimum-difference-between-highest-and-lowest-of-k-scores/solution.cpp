class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l = 0;
        int r = k-1;
        int smallest = 1e6;
        while(r<nums.size()){
            smallest = min(smallest, nums[r]-nums[l]);
            l++;
            r++;
        }
        return smallest;
    }
};