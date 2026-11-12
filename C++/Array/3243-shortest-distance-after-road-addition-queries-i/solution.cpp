class Solution {
public:
    vector<int> dijkstra(int n, vector<vector<pair<int, int>>> &adj, int source) {
        const int INF = 1e9;

        vector<int> dist(n, INF);

        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > pq;

        dist[source] = 0;
        pq.push({0, source});

        while (!pq.empty()) {
            int d = pq.top().first;
            int u = pq.top().second;
            pq.pop();
            if (d != dist[u])
                continue;

            for (auto [v, weight] : adj[u]) {
                if (dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight;
                    pq.push({dist[v], v});
                }
            }
        }

        return dist;
    }

    vector<int> shortestDistanceAfterQueries(
        int n,
        vector<vector<int>>& queries
    ) {
        vector<vector<pair<int, int>>> adj(n);

        for (int i = 0; i < n - 1; i++) {
            adj[i].push_back({i + 1, 1});
        }

        vector<int> ans;

        for (auto &q : queries) {
            int u = q[0];
            int v = q[1];
            adj[u].push_back({v, 1});
            vector<int> dist = dijkstra(n, adj, 0);
            ans.push_back(dist[n - 1]);
        }
        return ans;
    }
};