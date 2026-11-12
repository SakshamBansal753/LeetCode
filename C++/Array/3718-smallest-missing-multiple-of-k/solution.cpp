class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int add = k;
        while (1) {
            if (find(nums.begin(), nums.end(), k) == nums.end()) {
                return k;
            }
            k += add;
        }
        return k;
    }
};