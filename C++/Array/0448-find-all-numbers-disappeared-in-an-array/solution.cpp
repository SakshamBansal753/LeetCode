class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> repeat(nums.begin(), nums.end());
        vector<int> result;
        for (int i = 1; i <= nums.size(); i++) {
            if (repeat.find(i) == repeat.end())
                result.push_back(i);
        }
        return result;
    }
};
