class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int st=0;int end=n-1;
        while(st<end){
         int mid=st+(end-st)/2;
         if(nums[mid]>nums[end]){
            st=mid+1;
         }else{
            end=mid;
         }

        }
        int pivot=st;
          st=0;
          end=n-1;
          if (target >= nums[pivot] && target <= nums[end]) {
            st = pivot;
        } else {
            end = pivot - 1;
        }
        while(st<=end){
            int  mid=st+(end-st)/2;
            if(nums[mid]>target){
                end=mid-1;
            }else if(nums[mid]<target){
                st=mid+1;
            }else{
                return mid;
            }
        }
        return -1;
    }
};