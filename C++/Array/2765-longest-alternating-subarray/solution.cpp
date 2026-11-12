class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int flag=1;
        int n=nums.size();
        int curr=1;
        int ans=-1;
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]==flag){
                curr++;
                flag *= -1;
            }else{
               if(nums[i]-nums[i-1]==1){
                curr=2;
                flag=-1;
               } else{
                curr=1;
                flag=1;
               }
            }
            if (curr >= 2)
                ans = max(ans, curr);
            
        }
        return ans;
    }
};