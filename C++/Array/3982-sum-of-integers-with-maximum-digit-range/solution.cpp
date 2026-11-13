class Solution {
public:
    int digitsum(int n){
        int m1=0;
        int m2=9;
        while(n){
            int rem=n%10;
            m1=max(m1,rem);
            m2=min(m2,rem);
            n/=10;
        }
        return m1-m2;
    }
    int maxDigitRange(vector<int>& nums) {
        int mxcnt=0;
        for(int num:nums){
            mxcnt=max(mxcnt,digitsum(num));
        }
        int sum=0;
        for(int num:nums){
            sum+=(mxcnt==digitsum(num))?num:0;
        }
        return sum;
    }
};