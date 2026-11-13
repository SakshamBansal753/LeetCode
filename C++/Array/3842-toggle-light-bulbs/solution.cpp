class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map<int,int>m;
        for(int b:bulbs){
            m[b]++;
        }
        vector<int>ans;
        for(auto it:m){
            if(it.second%2!=0){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};