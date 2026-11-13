class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int idx=0;
        int mid,st=0,end=n-1;
        while(st<=end){
            mid=st+(end-st)/2;
            if(nums[mid]>target){
                end=mid-1;
                continue;
            }
            if(nums[mid]<target){
                st=mid+1;
                continue;
            }
             if(nums[mid]==target){
                return mid;
             }
        }
        return st;
        
    }
};