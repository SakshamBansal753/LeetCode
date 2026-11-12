class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        for(int i=0;i<n-1;i+=2){
            int s=nums[i];
            int k=to_string(nums[i+1]).size();
            s=s*pow(10,k)+nums[i+1];
            ans=min(ans,s);
        }
        return ans;
    }
};