class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        if(k==0) return nums[0];
        for(int i=1;i<n;i++){
            int cp=i;
            int c=0;
            while(cp){
                c+=cp&1;
                cp>>=1;
            }
            if(c==k) sum+=nums[i];
        }
        return sum;
    }
};