class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
       vector<int>arr(nums.size(),0);
       int r=nums.size()-1;
       for(int num:nums){
        if(num%2!=0){
            arr[r]=1;
            r--;
        }
       }
       return arr;
    }
};