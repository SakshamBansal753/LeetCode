class Solution {
public:
    vector<vector<pair<int,int>>>adj;
    int djikistra(int src,int n,int thr){
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,src});
        vector<int>vis(n,0);
        vector<int>dist(n,1e9);
        dist[src]=0;
        while(!pq.empty()){
            auto curr=pq.top();
            int node=curr.second;
            int wt=curr.first;
            pq.pop();
            if(vis[node]) continue;
            vis[node]=true;
            for(auto k:adj[node]){
                int ad=k.first;
                int edw=k.second;
                if(dist[ad]>dist[node]+edw){
                    dist[ad]=dist[node]+edw;
                    pq.push({dist[ad],ad});
                }
            }
            
            


        }
        
            int count=0;
            for(int i=0;i<n;i++){
                if(dist[i]<=thr)count++;
            }
        return count-1;
    }
    
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        adj.resize(n);
        for(auto edge:edges){
            adj[edge[0]].push_back({edge[1], edge[2]});
             adj[edge[1]].push_back({edge[0], edge[2]});
        }
        int bestcount=INT_MAX;
        int bestcity=0;
        for(int i=0;i<n;i++){
            int cv=djikistra(i,n,distanceThreshold);
            if(cv<=bestcount){
                bestcount=cv;
                bestcity=i;

            }
        }
        return bestcity;
    }
    
};