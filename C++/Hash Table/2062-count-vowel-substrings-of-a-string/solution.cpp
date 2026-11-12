class Solution {
public:
    bool isvowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' ||
               c == 'o' || c == 'u';
    }

    int countVowelSubstrings(string word) {
        int last[5] = {-1, -1, -1, -1, -1};

        int left = 0;
        int ans = 0;

        for (int r = 0; r < word.size(); r++) {

            if (!isvowel(word[r])) {
                left = r + 1;
                fill(last, last + 5, -1);
                continue;
            }

            int idx;

            if (word[r] == 'a') idx = 0;
            else if (word[r] == 'e') idx = 1;
            else if (word[r] == 'i') idx = 2;
            else if (word[r] == 'o') idx = 3;
            else idx = 4;

            last[idx] = r;

            int mn = *min_element(last, last + 5);

            if (mn >= left) {
                ans += mn - left + 1;
            }
        }

        return ans;
    }
};