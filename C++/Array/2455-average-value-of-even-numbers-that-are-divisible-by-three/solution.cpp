class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum=0;
        int count=0;
        for(int n:nums){
            if(n%3==0&&n%2==0){
                sum+=n;
                count++;
            }
        }
        if(count==0){
            return 0;
        }else{
            return int(sum/count);
        }

    }
};