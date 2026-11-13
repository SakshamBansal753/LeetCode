class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        if(nums.empty()) return 0;
        int cnt=0,sum=0,n=nums.size();
        for(int i=n-1;i>0;i--){
            sum+=nums[i];
            if(nums[i-1]>sum/(n-i)) cnt++;
        }
        return cnt;
    }
};