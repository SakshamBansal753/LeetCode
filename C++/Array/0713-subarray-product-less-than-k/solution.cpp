class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;
       int n=nums.size();
       int left=0,right=0;
       int pr=1,cnt=0;
       while(right<n){
            pr*=nums[right];
            while(pr>=k&&left<n){
                pr/=nums[left];
                left++;
            }
            cnt+=(right-left+1);
            right++;
       }
       return cnt;
    }
};