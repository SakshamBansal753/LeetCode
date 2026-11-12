class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";
        reverse(s.begin(), s.end());
        for (int i = 0; i < n;) {
            string word = "";
            
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }
            while (i < n && s[i] == ' ') {
                i++;
            }
            if (!word.empty()) {
                if (!ans.empty()) {
                    ans += " ";  
                }
                reverse(word.begin(), word.end());
                ans += word;
            }
        }
        
        return ans;
    }
};