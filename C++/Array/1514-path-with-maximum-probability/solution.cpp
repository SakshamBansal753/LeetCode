class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        
        vector<vector<pair<int,double>>>adj(n);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back({edges[i][1],succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0],succProb[i]});
        }
        priority_queue<pair<double,int>> pq;
            vector<double> dis(n,0.0);
            dis[start_node]=1.0;
            pq.push({1.0,start_node});
            while(!pq.empty()){
                auto it=pq.top();
                pq.pop();
                double dist=it.first;
                int node=it.second;
                if(node==end_node)
                    return dist;
                if(dist<dis[node])
                    continue;
                for(auto x:adj[node]){
                    int u=x.first;
                    double ew=x.second;
                    if(dist*ew>dis[u]){
                        dis[u]=dist*ew;
                        pq.push({dis[u],u});
                    }
                }
            }
            return 0.0;
    }
};