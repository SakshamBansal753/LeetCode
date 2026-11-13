class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
       int cnt=0;
        for(int n:nums){
            if(n==0){
                if(digit==0) cnt++;
                continue;
            }
            while(n>0){
                if(n%10==digit)cnt++;
                n/=10;
            }
        }
        return cnt;
    }
};