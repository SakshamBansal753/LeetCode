class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        vector<int> ans;
        
        for (int num : nums) {
            if (counts[num] < k) {
                ans.push_back(num);
                counts[num]++;
            }
        }
        
        return ans;
    }
};