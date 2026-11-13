class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>m;
       for (char c : s) {
            m[c]++;
        }
int f=m.begin()->second;
            
        
        for(const auto&pair:m){
            if(pair.second!=f){
                return false;
            }
        }
        return true;
    }
};