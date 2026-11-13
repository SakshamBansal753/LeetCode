class Solution {
public:
int cnt=0;
unordered_set<int>ans;
void dfs(int n,vector<vector<int>>&adj,vector<int>&vis,int src){
    if(ans.find(src)!=ans.end()) return;
    vis[src]=1;
    cnt++;
    for(int ed:adj[src]){
        if(!vis[ed]){
            dfs(n,adj,vis,ed);
        }
    }
    return;
}
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        vector<vector<int>>adj(n);
        for(auto edge:edges){
            int u=edge[0];
            int v=edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for(int i:restricted){
            ans.insert(i);
        }
        vector<int>vis(n,0);
        dfs(n,adj,vis,0);
        return cnt;
    }
};