class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       int p=0;
       int n=1;
       int k=nums.size();
       vector<int>ans(k,0);
       for(int i=0;i<k;i++){
        if(nums[i]>=0){
            ans[p]=nums[i];
            p+=2;
        }else{
            ans[n]=nums[i];
            n+=2;
        }
       }
       return ans;
    }
};