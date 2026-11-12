class Solution {
public:
    bool dfs(vector<vector<char>>& grid,
             stack<char>& s,
             int n, int m,
             int i, int j,
             vector<vector<vector<int>>>& dp) {

        if (i >= n || j >= m)
            return false;

        int balance = s.size();

        if (dp[i][j][balance] != -1)
            return dp[i][j][balance];

        if (grid[i][j] == '(') {
            s.push('(');
        }
        else {
            if (s.empty())
                return dp[i][j][balance] = false;

            s.pop();
        }
        if (i == n - 1 && j == m - 1) {
            bool ans = s.empty();
            if (grid[i][j] == '(')
                s.pop();
            else
                s.push('(');

            return dp[i][j][balance] = ans;
        }

        bool ans = dfs(grid, s, n, m, i + 1, j, dp) ||
            dfs(grid, s, n, m, i, j + 1, dp);
        if (grid[i][j] == '(')
            s.pop();
        else
            s.push('(');

        return dp[i][j][balance] = ans;
    }

    bool hasValidPath(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        if ((n + m - 1) % 2 != 0)
            return false;
        stack<char> s;
        vector<vector<vector<int>>> dp(
            n,
            vector<vector<int>>(m,
                vector<int>(n + m, -1)
            )
        );

        return dfs(grid, s, n, m, 0, 0, dp);
    }
};