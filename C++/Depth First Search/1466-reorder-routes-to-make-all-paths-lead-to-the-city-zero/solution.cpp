class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        int ans=0;
        vector<vector<pair<int,int>>>adj(n);
        for(auto connected:connections){
            adj[connected[0]].push_back({connected[1],1});
            adj[connected[1]].push_back({connected[0],0});
        }
        queue<int>q;
        vector<int>visited(n,0);
        q.push(0);
        visited[0]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto [v,cost]:adj[node]){
                if(!visited[v]){
                    
                    ans+=cost;
                    visited[v]=true;
                    q.push(v);
                }else{
                    continue;
                }
            }
        }
        return ans;
    }
};