class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>m;
        for(int num:nums){
            m[num]++;
        }
        vector<vector<int>>b(nums.size()+1);
        for(auto &p:m){
            b[p.second].push_back(p.first);
        }
      
       int i=nums.size();
       while(i>=0&&ans.size()<k){
        for(int num:b[i]){
            ans.push_back(num);
            if(ans.size()==k) break;
        }
        i--;
       }
       return ans;

        
    }
};