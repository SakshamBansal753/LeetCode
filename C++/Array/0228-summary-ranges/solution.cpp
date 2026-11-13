class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        int st=0;
        int end=0;
        while(st<nums.size()){
            int count=nums[st];
            while(end+1<nums.size()){
                if(nums[end+1]==nums[end]+1){
                    end++;
                }else{
                break;
                }
            }
          if(st!=end){
              
            ans.push_back(to_string(count)+"->"+to_string(nums[end]));
            
          }else{
            ans.push_back(to_string(nums[end]));
          }
          st=end+1;
          end=end+1;
        }
        return ans;
    }
};