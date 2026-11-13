class Solution {
public:
    int arraySign(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        int i=0;
        while(i<nums.size()&&nums[i]<=0){
            if(nums[i]==0){
                return 0;
            }
            sum++;
            i++;
        }
        return sum%2!=0?-1:1;
    }
};