class Solution {
public:
static bool comp(pair<char,int> &a, pair<char,int> &b) {
    return a.second > b.second;  
}
    string frequencySort(string s) {
        unordered_map<char,int>m;
        for (char c:s){
            m[c]++;
        }
        vector<pair<char,int>>ans(m.begin(),m.end());
        sort(ans.begin(),ans.end(),comp);
        string a="";
        for(auto it:ans){
            a.append(it.second,it.first);
        }
        return a;



    }
};