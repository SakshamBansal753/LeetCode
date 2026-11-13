class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return true;
        unordered_map<int,int>m;
        for(int num:nums){
            m[num]++;
        }
      
        return m[nums[n/2]]==1?true:false;
    }
};