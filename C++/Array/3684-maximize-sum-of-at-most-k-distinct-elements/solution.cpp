class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<int> ans;
        for(int i=n-1; i>=0; i--){
            if(ans.size()==k) break;
            if(i!=n-1 and nums[i]==nums[i+1]) continue;
            ans.push_back(nums[i]);
        }
        return ans;
    }
};