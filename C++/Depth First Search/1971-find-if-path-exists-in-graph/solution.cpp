class Solution {
public:
class disjoint_set{
    vector<int>rank,parent;
    public:
    disjoint_set(int n){
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
    void union_r(int u,int v){
        int ul_u=findpar(u);
        int ul_v=findpar(v);
        if(ul_u==ul_v) return ;
        if(rank[ul_u]<rank[ul_v]){
            parent[ul_u]=ul_v;
        }
        else if(rank[ul_v]<rank[ul_u]){
            parent[ul_v]=ul_u;
        }
        else{
            parent[ul_v]=ul_u;
            rank[ul_u]++;
        }
        return ;
    }
    
};
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
       disjoint_set d(n);
       for(auto &it:edges){
        d.union_r(it[0],it[1]);
       }
       return d.findpar(source)==d.findpar(destination);
        
    }
};