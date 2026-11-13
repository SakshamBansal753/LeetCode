class Solution {
public:
    int dominantIndex(vector<int>& nums) {
      int m= *max_element(nums.begin(), nums.end());
     int j= find(nums.begin(),nums.end(),m) -nums.begin();
     sort(nums.begin(),nums.end());
     return nums[nums.size()-2]*2<=m?j:-1;
    }
};