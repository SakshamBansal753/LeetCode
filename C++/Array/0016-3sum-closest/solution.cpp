class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
            int n = nums.size();
    sort(nums.begin(), nums.end());
    int bestSum = nums[0] + nums[1] + nums[2];  

    for (int i = 0; i < n - 2; ++i) {
        int lo = i + 1, hi = n - 1;
        while (lo < hi) {
            int currSum = nums[i] + nums[lo] + nums[hi];
            if (abs(currSum - target) < abs(bestSum - target)) {
                bestSum = currSum;
            }
            if (currSum < target) {
                ++lo;
            } else if (currSum > target) {
                --hi;
            } else {
             
                return target;
            }
        }
    }
    return bestSum;
    }
};