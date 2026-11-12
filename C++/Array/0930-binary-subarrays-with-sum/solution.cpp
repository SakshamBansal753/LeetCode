class Solution {
public:
    int lessthan(vector<int>&nums,int goal){
        int i=0;
        int j=0;
        int n=nums.size();
        int sum=0;
        int count=0;
        while(j<n){
            sum+=nums[j];
            while(i<=j&&sum>goal){
                sum-=nums[i];
                i++;
            }
            count+=j-i+1;
            j++;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return lessthan(nums,goal)-lessthan(nums,goal-1);
    }
};