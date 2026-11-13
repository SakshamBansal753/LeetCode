class Solution {
public:
    double minimumAverage(vector<int>& nums) {
       vector<double> ans;
       sort(nums.begin(),nums.end());
       int i=0,j=nums.size()-1;
       double m=INT_MAX;
       double x=0;
       while(i<=j){
        x = (nums[i]+nums[j])/2.0;
        m=min(x,m);
        i++;
        j--;

       } 
       return m;
    }
};