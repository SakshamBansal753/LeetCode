class Solution {
public:
    int distinctAverages(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int st=0;int end=nums.size()-1;
       unordered_map<double,int>m;
       while(st<end){
        double average=(nums[st]+nums[end])/2.0;
        m[average]=1;
        st++;
        end--;
       }
       return m.size();
    }
};