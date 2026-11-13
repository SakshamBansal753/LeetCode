class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int small=0;
        int same=0;
        vector<int>ans(nums.size(),0);
        for(int num:nums){
            if(num<pivot){
                small++;
            }
          if(num==pivot){
            same++;
        }
        }
        int left=0;int mid=small;
        int right=small+same;
        for(int num:nums){
            if(num<pivot){
                ans[left]=num;
                left++;
            }else if(num==pivot){
                ans[mid++]=num;
             } else{
                ans[right++]=num;
            }
        }
        return ans;
    }
};