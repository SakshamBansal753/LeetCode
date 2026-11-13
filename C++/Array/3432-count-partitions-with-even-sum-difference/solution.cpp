class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int total_sum=0;
        for(int num:nums){
            total_sum+=num;
        }
        int left=0,count=0;
        for(int i =0;i<nums.size()-1;i++){
            left+=nums[i];
            int right=total_sum-left;
            if((left-right)%2==0){
                count++;
            }
        }
        return count;
    }
};