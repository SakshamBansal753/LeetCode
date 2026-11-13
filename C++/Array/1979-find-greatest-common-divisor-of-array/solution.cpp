class Solution {
public:
    int findGCD(vector<int>& nums) {
       sort(nums.begin(),nums.end());
      int  num1=nums[0];
       int num2=nums[nums.size()-1];
            while(num2!=0){
         int temp=num2;
         num2=num1%num2;
         num1=temp;
     }
 return num1;
    }
};