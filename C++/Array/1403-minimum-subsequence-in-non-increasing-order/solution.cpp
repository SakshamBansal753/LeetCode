class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>{});
        int sum=0;
        for(int m:nums){
            sum+=m;
        }
        vector<int>ans;
        int cs=0;
        for(int i=0;i<nums.size();i++){
            cs+=nums[i];
            ans.push_back(nums[i]);
            if(cs>sum-cs){
            break;
            }
        }
        return ans;

    }
};