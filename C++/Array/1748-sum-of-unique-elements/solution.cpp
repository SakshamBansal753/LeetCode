class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int val:nums){
            m[val]++;
        }
            int sum=0;
        for(int val:nums){
            if(m[val]<=1){
                sum+=val;
            }
        }
        return sum;
    }
};