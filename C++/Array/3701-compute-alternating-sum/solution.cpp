class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum=0;
        int flag=1;
        for(int num:nums){
            sum=sum+num*flag;
            flag*=-1;
        }
        return sum;
    }
};