class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ml=0;
        int l=0;
        int r=0;
        int zeroes=0;
        while(r<nums.size()){
            if(nums[r]==0){
                zeroes++;
            }
            while(zeroes>1){
                if(nums[l]==0) zeroes--;
                l++;
            }
            
                int len=r-l+1;
                ml=max(ml,len);
            
            r++;
        }
        return ml-1;
    }
};