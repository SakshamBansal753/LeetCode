class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       unordered_map<int,int>m;
       for(int i :arr){
        m[i]++;
       }
        unordered_set<int>s;
        for(auto key:m){
            if(s.count(key.second)){
                return false;
            }
            s.insert(key.second);
        }
        return true;
    }
};