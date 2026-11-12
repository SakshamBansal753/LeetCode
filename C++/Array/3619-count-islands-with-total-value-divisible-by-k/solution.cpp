
class DisjointSet {
public:
    vector<int> parent, size;
    vector<long long> sum;

    DisjointSet(int n, vector<vector<int>>& grid, int m, int cols) {
        parent.resize(n);
        size.assign(n, 1);
        sum.assign(n, 0);

        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < cols; j++) {
                int id = i * cols + j;
                sum[id] = grid[i][j];
            }
        }
    }

    int findpar(int node) {
        if (parent[node] == node) return node;
        return parent[node] = findpar(parent[node]);
    }

    void uns(int u, int v) {
        u = findpar(u);
        v = findpar(v);

        if (u == v) return;

        if (size[u] < size[v]) swap(u, v);

        parent[v] = u;
        size[u] += size[v];
        sum[u] += sum[v];
    }
};

class Solution {
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        DisjointSet ds(m * n, grid, m, n);

        int dr[2] = {1, 0};
        int dc[2] = {0, 1};

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) continue;

                for (int d = 0; d < 2; d++) {
                    int nr = i + dr[d];
                    int nc = j + dc[d];

                    if (nr < m && nc < n && grid[nr][nc] != 0) {
                        ds.uns(i * n + j, nr * n + nc);
                    }
                }
            }
        }

        int cnt = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) continue;

                int id = i * n + j;

                if (ds.findpar(id) == id && ds.sum[id] % k == 0) {
                    cnt++;
                }
            }
        }

        return cnt;
    }
};
