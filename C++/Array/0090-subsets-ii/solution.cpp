class Solution {
public:
  void getallsubsets(vector<int>& nums,vector<int> &ans,int i,vector<vector<int>>& allsubsets) { 
        if(i==nums.size()){
            allsubsets.push_back({ans});
            return;
        }
        ans.push_back(nums[i]);//inclusion
           getallsubsets(nums,ans,i+1,allsubsets);
           int index=i+1;
           while(index<nums.size()&&nums[index]==nums[index-1]){
            index++;
           }
           ans.pop_back();//exclusion
           getallsubsets(nums,ans,index,allsubsets);
  }
  vector<vector<int>> subsetsWithDup(vector<int>& nums){
    sort(nums.begin(),nums.end());
   vector< vector<int>> allsubsets;
    vector<int> ans;
    
    getallsubsets(nums,ans,0,allsubsets);
     return allsubsets;
  }
    
};
   