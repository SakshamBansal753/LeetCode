class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans = 0, c = 0;
        for (int x : nums) {
            if (x >= minK && x <= maxK) {
                c++;
                ans += c;
            } else {
                c = 0;
            }
        }
        return ans;
    }
};