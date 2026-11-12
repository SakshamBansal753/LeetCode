class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
      int less=0;
      int targets=0;
      int n=nums.size();
      for(int i=0;i<n;i++){
        if(nums[i]==target){
            targets++;
        }else if(nums[i]<target){
            less++;
        }
      }
      vector<int>ans;
      for(int i=0;i<targets;i++){
        if(less==0){
            ans.push_back(i);
        }else{
            ans.push_back(less+i);
        }
      }
      return ans;
 }
};