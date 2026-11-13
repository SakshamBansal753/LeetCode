class Solution {
public:
    int atMost(vector<int>& nums, int k) {
        int l = 0, count = 0;
        for (int r = 0; r < nums.size(); ++r) {
            if (nums[r] % 2 != 0) k--;  // count odd numbers
            while (k < 0) {
                if (nums[l] % 2 != 0) k++;
                l++;
            }
            count += (r - l + 1);  // count subarrays ending at r
        }
        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};
