class Solution {
public:
    int search(vector<int>& nums, int target) {
        int str=0,end=nums.size()-1;
        int mid;
        while(str<=end){
            mid=str+(end-str)/2;
            if(nums[mid]>target){
                end=mid-1;
            }
             if(nums[mid]<target){
                str=mid+1;
            }
            if(nums[mid]==target){
                return mid;
            }

        }
        return -1;
    }
};