class Solution {
public:
bool iseven(int m){
    return m%2==0;
}
    int singleNonDuplicate(vector<int>& nums) {
        int st=0,end=nums.size()-1;
        int n=nums.size()-1;
        if(nums.size()==1){
            return nums[0];
        }
        while(st<=end){
           int  m=st+(end-st)/2;
            if(nums[0]!=nums[1]){
                return nums[0];
            }
            if(nums[n-1]!=nums[n]){
                return nums[n];
            }
               if(nums[m]!=nums[m-1]&&nums[m]!=nums[m+1]){
                return nums[m];
               }
               if(iseven(m)){
                if(nums[m-1]==nums[m]){
                    end=m-1;
                }else{
                    st=m+1;
                }
               }else{
                 if(nums[m-1]==nums[m]){
                    st=m+1;
                }else{
                    end=m-1;
                }
               }

        }
        return -1;
    }
};