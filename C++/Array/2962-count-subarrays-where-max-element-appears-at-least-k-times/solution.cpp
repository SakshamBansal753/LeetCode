class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long count=0;
      int max=*max_element(nums.begin(),nums.end());
      int number=0;
      int st=0;
      for(int i=0;i<nums.size();i++){
  if (nums[i] == max) {
                number++;
            }
       while(number>=k){
        count+=(nums.size()-i);
        if(nums[st]==max){
           number--;
        }
        st++;

       }
      }
      
        return count;  
    }
};