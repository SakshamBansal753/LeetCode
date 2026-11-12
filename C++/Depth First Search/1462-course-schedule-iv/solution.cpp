class Solution {
public:
bool dfs(int src,vector<bool>&vis,vector<bool>&recpath,vector<vector<int>>&adj){
    vis[src]=true;
    recpath[src]=true;
    for(auto &it:adj[src]){
        if(!vis[it]){
            if(dfs(it,vis,recpath,adj)) return true;
        }else if(recpath[it]) return true;
    }
    recpath[src]=false;
    return false;
}
void topo(int src,vector<bool>&vis,vector<vector<int>>&adj,stack<int>&s){
    vis[src]=true;
    for(auto &it:adj[src]){
        if(!vis[it]) topo(it,vis,adj,s);
    }
    s.push(src);
    return;
}
void findPrereq(int src, int node, vector<bool>& vis,  vector<vector<int>>& adj, vector<vector<bool>>& reach) {
    vis[node] = true;
    for (auto &it : adj[node]) {
        if (!vis[it]) {
            reach[src][it] = true;
            findPrereq(src, it, vis, adj, reach);
        }
    }
}
vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& pre, vector<vector<int>>& queries) {
        vector<bool>vis(n,false);
        vector<bool>rec(n,false);
        vector<vector<int>>adj(n);
        for(auto &p:pre){
            int a =p[0];
            int b=p[1];
            adj[a].push_back(b);
        }
        vector<vector<bool>> reach(n, vector<bool>(n, false));
        for(int i = 0; i < n; i++) {
            vector<bool> vis(n, false);
            findPrereq(i, i, vis, adj, reach);
        }
        vector<bool>ans;
        for (auto &q : queries) {
                ans.push_back(reach[q[0]][q[1]]);
            }

        return ans;

    }
};