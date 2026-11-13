class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        int i = 0;
        
        while (i < s.length()) {
            string m = "";
            for (int j = 0; j < k; ++j) {
                if (i < s.length()) {
                    m += s[i++];
                } else {
                    m += fill;
                }
            }
            ans.push_back(m);
        }
        
        return ans;
    }
};
