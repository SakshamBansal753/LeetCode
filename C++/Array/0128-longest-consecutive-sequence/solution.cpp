class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        int ans=0;
        unordered_set<int>st(nums.begin(),nums.end());
        for(int num:st){
            if(st.count(num-1)){
                continue;
            }
            int val=num;
            int curr=1;
            while(st.count(val+1)){
                val++;
                curr++;
            }
            ans=max(ans,curr);
        }
        return ans;
    }
};