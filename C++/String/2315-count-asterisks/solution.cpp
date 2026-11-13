class Solution {
public:
    int countAsterisks(string s) {
        
        bool cons = true;
        int ans = 0;

        for (const char& ch : s) {
            if (ch == '|') {
                cons = !cons;
                continue;
            }

            if (cons && ch=='*') {
                ans++;
            }
        }

        return ans;
    }
};