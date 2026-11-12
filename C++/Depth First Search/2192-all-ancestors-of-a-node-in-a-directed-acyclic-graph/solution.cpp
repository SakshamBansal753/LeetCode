class Solution {
public:
    void dfs(int i, int n, vector<vector<int>>& adj, int parent,
             vector<bool>& vis, vector<vector<int>>& res) {

        vis[i] = true;

        for (auto k : adj[i]) {
            if (!vis[k]) {
                res[k].push_back(parent);
                dfs(k, n, adj, parent, vis, res);
            }
        }
    }

    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> res(n);
        vector<vector<int>> adj(n);

        for (auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
        }

        for (int i = 0; i < n; i++) {
            vector<bool> vis(n, false);
            dfs(i, n, adj, i, vis, res);
        }

        for (int i = 0; i < n; i++) {
            sort(res[i].begin(), res[i].end());
        }

        return res;
    }
};