class Solution {
public:
    int sumCounts(vector<int>& nums) {
        static bitset<101>seen;
        int n=nums.size();
        
        int ans=0;
        for(int i=0;i<n;i++){
            seen.reset();
            int cnt=0;
            for(int r=i;r<n;r++){
                int x=nums[r];
                cnt+=(seen[x]==0);
                seen[x]=1;
                ans+=cnt*cnt;
            }
        }
        return ans;
    }
};