class Solution {
public:
    string removeStars(string s) {
        int n=s.length();
        if(n==0) return "";
        string ans;
        for (char c : s) {
            if (c == '*') {
                ans.pop_back();
            } else {
                ans.push_back(c);
            }
        }
        return ans;
    }
};