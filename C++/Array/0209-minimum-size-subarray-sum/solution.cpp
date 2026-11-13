class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;
        int sum = 0;
        int ml = INT_MAX;

        for (int r = 0; r < nums.size(); r++) {
            sum += nums[r];

            while (sum >= target) {
                ml = min(ml, r - l + 1);
                sum -= nums[l++];
            }
        }

        return ml == INT_MAX ? 0 : ml;
    }
};
