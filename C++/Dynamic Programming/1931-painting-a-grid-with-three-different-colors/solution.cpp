
const int M = 1e9+7;

class Solution {
public:
    int colorTheGrid(int m, int n) {
        vector<int> a;
        int k = pow(3, m);
        for (int i = 0; i < k; i++) {
            vector<int> b(m);
            int t = i;
            bool ok = 1;
            for (int j = 0; j < m; j++) {
                b[j] = t % 3;
                t /= 3;
                if (j && b[j] == b[j-1]) {
                    ok = 0;
                    break;
                }
            }
            if (ok) a.push_back(i);
        }

        int s = a.size();
        vector<vector<int>> g(s);
        for (int i = 0; i < s; i++) {
            for (int j = 0; j < s; j++) {
                if (f(a[i], a[j], m)) {
                    g[i].push_back(j);
                }
            }
        }

        vector<int> dp(s,1);
        for (int i = 1; i < n; i++) {
            vector<int> ndp(s);
            for (int j = 0; j < s; j++) {
                for (int v : g[j]) {
                    ndp[v] = (ndp[v] + dp[j]) % M;
                }
            }
            dp = ndp;
        }

        int ans = 0;
        for (int x : dp) ans = (ans + x) % M;
        return ans;
    }

    bool f(int x, int y, int m) {
        for (int i = 0; i < m; i++) {
            if (x%3 == y%3) return 0;
            x/=3;
            y/=3;
        }
        return 1;
    }
};