class Solution {
public:
    bool iscycle(int n,vector<vector<int>>&adj,int src,vector<bool>&vis,vector<bool>&rec){
        vis[src]=true;
        rec[src]=true;
        for(auto edge:adj[src]){
            if(!vis[edge]){
                if(iscycle(n,adj,edge,vis,rec)) return true;
            }else if(rec[edge]){
                return true;
            }
        }
        rec[src]=false;
        return false;
    }
    bool canFinish(int n, vector<vector<int>>& pre) {
          vector<vector<int>>adj(n);
          for(auto edge :pre){
            int a=edge[0];
            int b=edge[1];
            adj[b].push_back(a);
          }
          vector<bool>vis(n,false);
          vector<bool>recpath(n,false);
          for(int i=0;i<n;i++){
            if(!vis[i]){
                if(iscycle(n,adj,i,vis,recpath)) return false;
            }
          }
          return true;
    }
};