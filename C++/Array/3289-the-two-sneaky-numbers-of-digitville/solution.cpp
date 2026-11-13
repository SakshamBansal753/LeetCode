class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_set<int>s;
        vector<int>ans;
        for(int num:nums){
            if(s.find(num)!=s.end()){
                ans.push_back(num);
            }
            s.insert(num);
        }
        return ans;
    }
};