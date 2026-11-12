class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,vector<int>>m;
        for(int i=0;i<n;i++){
            m[nums[i]].push_back(i);
        }
        int cnt=0;
        for (auto j : m) {
            if (j.second.size() == 3) {
                vector<int>& v = j.second;
                if (v[2] - v[1] == v[1] - v[0]) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};