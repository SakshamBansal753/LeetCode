class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int x=0;
        int cnt=0;
        for(int k:nums){
            x+=k;
            if(x==0){
                cnt++;
            }
        }
        return cnt;
    }
};