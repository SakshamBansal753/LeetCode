class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>s;
        for(int i=0;i<n;i++){
            int value=target-nums[i];
            if (s.find(value) != s.end()) {
                return {s[value], i};
            }
            s[nums[i]]=i;
        }
        return {};
    }
};