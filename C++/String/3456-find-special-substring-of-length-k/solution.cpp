class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        int n = s.length();
        int l = 0;

        while (l < n) {
            unordered_set<char> st;
            int r = 0;

            while (l + r < n && r < k) {
                st.insert(s[l + r]);
                r++;
            }

            if (r == k && st.size() == 1) {
                char c = s[l];
                if ((l == 0 || s[l-1] != c) && (l + k == n || s[l+k] != c)) {
                    return true;
                }
            }

            l++;
        }

        return false;
    }
};