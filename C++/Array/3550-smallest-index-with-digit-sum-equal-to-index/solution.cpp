class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int idx=i;
            int a=nums[i];
            int s=0;
            while(a!=0){
                s+=a%10;
                a/=10;
            }
            if(s==idx){
                return idx;
            }
        }
        return -1;
    }
};