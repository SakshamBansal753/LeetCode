class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    int ans=0;
    int i=0;
    while(ans<g.size() && i<s.size()){
       if(g[ans]<=s[i]) {
        i++;
        ans++;
       }
       else i++;
    }
    return ans;
    }
};