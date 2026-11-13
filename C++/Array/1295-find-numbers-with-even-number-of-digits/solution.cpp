class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(int n:nums){
            int co=0;
            while(n){
                n=n/10;
                co++;

            }
            if(co%2==0){
                c++;
            }
        }
        return c;
    }
};