class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int l=0;
       int r=0;
       int ml=0;
       int n=nums.size();
       int zeroes=0;
       while(r<n){
            if(nums[r]==0){
                zeroes++;
            }
            while(l<=r&&zeroes>k){
                if(nums[l]==0){
                    zeroes--;
                }
                l++;
            }
            int len=r-l+1;
            r++;
            ml=max(ml,len);
       }
       return ml;
    }
};