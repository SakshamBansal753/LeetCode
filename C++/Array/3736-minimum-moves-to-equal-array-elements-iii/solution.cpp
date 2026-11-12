class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        int maxi=nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
           cnt+=maxi-nums[i];
        }
        return cnt;
    }
};