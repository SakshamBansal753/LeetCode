class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0] + nums[1];
        int counter = 0;
        int max_count = 0;
        for (int i = 2; i < n; i++) {
            if (nums[i] == sum) counter++;
            else {
                max_count = max(counter, max_count);
                counter = 0;
            }
            sum += nums[i] - nums[i-2];
        }
        return max(max_count, counter) + 2;
    }
};