class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
       int ans = 0;
        for (int i = 1; i + 1 < nums.size(); i++) {
            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
                ans += nums[i];
            else if (nums[i] < nums[i - 1] && nums[i] < nums[i + 1])
                ans -= nums[i];
        }
        return ans;
    }
};