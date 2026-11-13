class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int maxcnt=0;
        int i=0,j=0,n=nums.size();
        while(i<n&&j<n){
            if(nums[j]==1){
                cnt++;
            }else{
                maxcnt=max(cnt,maxcnt);
                cnt=0;
                i=j;
            }
            j++;

        }
        maxcnt=max(maxcnt,cnt);
        return maxcnt;
    }
};