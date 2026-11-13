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
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        vector<bool>vis(n,false);
        vector<bool>rec(n,false);
        vector<vector<int>>adj(n);
        for(auto &p:pre){
            int a =p[0];
            int b=p[1];
            adj[b].push_back(a);
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(dfs(i,vis,rec,adj)) return ans;
            }
        }
        vis.assign(n,false);
        stack<int>s;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                topo(i,vis,adj,s);
            }
        }
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        return ans;

    }
};