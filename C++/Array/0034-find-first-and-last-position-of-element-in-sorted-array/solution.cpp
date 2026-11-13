class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int left=0,right=nums.size()-1;
       vector<int>vec={-1,-1};
       while(left<=right){
        int mid=left+(right-left)/2;
        if(target==nums[mid]){
            vec[0]=mid;
            right=mid-1;
        }
        if(nums[mid]>target){
            right=mid-1;
        }
        if(nums[mid]<target){
            left=mid+1;
        }
       }
       if(vec[0]==-1){
        return vec;
       }
       left=vec[0];
       right=nums.size()-1;
       while(left<=right){
            int mid=left+(right-left)/2;
        if(target==nums[mid]){
            vec[1]=mid;
            left=mid+1;
        }
        if(nums[mid]>target){
            right=mid-1;
        }
        if(nums[mid]<target){
            left=mid+1;
        }
       }
       return vec;
    }
};