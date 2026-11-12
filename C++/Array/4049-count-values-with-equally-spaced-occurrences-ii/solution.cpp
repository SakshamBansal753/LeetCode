class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,vector<int>>m;
        for(int i=0;i<n;i++){
            m[nums[i]].push_back(i);
        }
        int cnt=0;
        for (auto j : m) {
            if (j.second.size() >= 3) {
                vector<int>& v = j.second;
                int diff=v[1]-v[0];
                int flag=0;
                for(int i=1;i<v.size();i++){
                    if(v[i]-v[i-1]!=diff){
                        flag=1;
                    }
                }
                if(flag==0)cnt++;
            }
        }
        return cnt;
    }
};