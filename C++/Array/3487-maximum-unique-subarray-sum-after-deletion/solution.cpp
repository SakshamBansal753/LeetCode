class Solution {
public:
    int maxSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        bool y=true;
        int ans=INT_MIN;
        for(int num:nums){
            if(num>=0){
                y=false;
                break;
            }
            ans=max(num,ans);

        }
        if(y) return ans;
        int sum=0;
        unordered_set<int>s(nums.begin(),nums.end());
        for(auto& num:s){
            if(num>=0) sum+=num;
        }
        return sum;
    }
};