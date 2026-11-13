class Solution {
public:
class disjointset{
    vector<int>rank,parent;
    public:
    disjointset(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
    }
    int findpar(int node){
        if(node==parent[node]){
            return node;
        }
        return parent[node]=findpar(parent[node]);
    }
    void unionfind(int u,int v){
        int ul_u=findpar(u);
        int ul_v=findpar(v);
        if(ul_u==ul_v) return;
        if(rank[ul_u]<rank[ul_v]){
            parent[ul_u]=ul_v;

        }else if(rank[ul_v]<rank[ul_u]){
            parent[ul_v]=ul_u;
        }else{
            parent[ul_v]=ul_u;
            rank[ul_u]++;
        }
        return;
    }

};
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
           disjointset d(n);
       for(auto &it:edges){
        d.unionfind(it[0],it[1]);
       }
       unordered_map<int, unordered_set<int>> componentVertices;
        unordered_map<int, int> componentEdges;
        
        for (int i = 0; i < n; ++i) {
            int root = d.findpar(i);
            componentVertices[root].insert(i);
        }
        
        for (auto& edge : edges) {
            int root = d.findpar(edge[0]);
            componentEdges[root]++;
        }
        
        int completeCount = 0;
        for (auto& [root, vertices] : componentVertices) {
            int numVertices = vertices.size();
            int expectedEdges = numVertices * (numVertices - 1) / 2;
            if (componentEdges[root] == expectedEdges) {
                completeCount++;
            }
        }
        
        return completeCount;
      
    }
};