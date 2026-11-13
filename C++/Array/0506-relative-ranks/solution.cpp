class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        if(score.size()==0) return {};
        vector<string>ans;
        vector<int>m=score;
        sort(m.begin(),m.end(), greater<int>());
        unordered_map<int,string>ma;
         for (int i = 0; i < score.size(); ++i) {
            if (i == 0) ma[m[i]] = "Gold Medal";
            else if (i == 1) ma[m[i]] = "Silver Medal";
            else if (i == 2) ma[m[i]] = "Bronze Medal";
            else ma[m[i]] = to_string(i + 1);
        }
        for(int c:score){
            ans.push_back(ma[c]);
        }
        return ans;
    
    }
};