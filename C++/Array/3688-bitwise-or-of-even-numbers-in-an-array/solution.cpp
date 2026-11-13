class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int a=0;
        for(int num:nums){
            if(!(num%2)){
                a=a|num;
            }
        }
        return a;
    }
};