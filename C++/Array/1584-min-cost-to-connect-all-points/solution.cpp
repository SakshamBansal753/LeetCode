class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
        int sum=0;
        vector<int>vis(n,0);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,0});
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            int node=it.second;
            int wt=it.first;
            if(vis[node]) continue;
            vis[node]=true;
            sum+=wt;
            for(int v=0;v<n;v++){
                if(!vis[v]){
                    int edw=abs(points[node][0]-points[v][0])+abs(points[node][1]-points[v][1]);
                    pq.push({edw,v});
                }
            }
        }
        return sum;
    }
};