class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int element_s=0;
        

        int sum=0;
        for(int num :nums){
            element_s+=num;
            while(num){
                sum+=num%10;
                num/=10;
            }
        }
        if(element_s>=sum){
            return element_s-sum;
        }
        return sum-element_s;
    }
};