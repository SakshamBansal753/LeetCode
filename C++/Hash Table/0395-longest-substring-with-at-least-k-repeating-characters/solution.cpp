class Solution {
public:
    int solve(string &s, int l, int r, int k) {
        if (r - l < k)
            return 0;
        vector<int> freq(26, 0);
        for (int i = l; i < r; i++)
            freq[s[i] - 'a']++;
        for (int i = l; i < r; i++) {
            if (freq[s[i] - 'a'] < k) {
                int left = solve(s, l, i, k);
                int right = solve(s, i + 1, r, k);

                return max(left, right);
            }
        }
        return r - l;
    }

    int longestSubstring(string s, int k) {
        return solve(s, 0, s.size(), k);
    }
};
