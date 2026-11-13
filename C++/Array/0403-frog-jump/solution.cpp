class Solution {
public:
    bool canCross(vector<int>& stones) {
        int n = stones.size();
        unordered_map<int, unordered_set<int>> dp;
        dp[0].insert(0);  

        for (int i = 0; i < n; i++) {
            for (int jump : dp[stones[i]]) {
                for (int next = jump - 1; next <= jump + 1; next++) {
                    if (next > 0) {
                        int reach = stones[i] + next;
                        if (reach == stones[n - 1]) return true;
                        if (binary_search(stones.begin(), stones.end(), reach)) {
                            dp[reach].insert(next);
                        }
                    }
                }
            }
        }
        return false;
    }
};
