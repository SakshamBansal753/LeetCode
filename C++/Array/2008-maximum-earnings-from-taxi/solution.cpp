
class Solution {
public:
    long long dfs(vector<vector<int>>& rides, int i,vector<long long>& dp) {
        if (i >= rides.size()) return 0;
        if (dp[i] != -1) return dp[i];
        long long notpick = dfs(rides, i + 1, dp);
        long long pick = rides[i][1] - rides[i][0] + rides[i][2];
        int end = rides[i][1];
        int lo = i + 1, hi = rides.size();
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (rides[mid][0] >= end)
                hi = mid;
            else
                lo = mid + 1;
        }
        pick += dfs(rides, lo, dp);
        return dp[i] = max(pick, notpick);
    }
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        sort(rides.begin(), rides.end());
        vector<long long> dp(rides.size(), -1);
        return dfs(rides, 0, dp);
    }
};
