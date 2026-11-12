class disjointset{
    public:
    vector<int>rank,parent;
    disjointset(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
    }
    int findpar(int node){
        if(parent[node]==node){
            return node;

        }
        return parent[node]=findpar(parent[node]);
    }
    void unionr(int u,int v){
        int ul_u=findpar(u);
        int ul_v=findpar(v);
        if(ul_u==ul_v) return;
        if(rank[ul_u]<rank[ul_v]){
            parent[ul_u]=ul_v;
        }else if(rank[ul_v]<rank[ul_u]){
            parent[ul_v]=ul_u;
        }
        else{
            parent[ul_v]=ul_u;
            rank[ul_u]++;
        }
    }
};
class Solution {
public:

    int makeConnected(int n, vector<vector<int>>& connections) {
        disjointset d(n);
        int cntextra=0;
        for(auto it : connections){
            int u=it[0];
            int v=it[1];
            if(d.findpar(u)==d.findpar(v)){
                cntextra++;
            }else{
                d.unionr(u,v);
            }
                    }

        int cntc=0;
        for(int i=0;i<n;i++){
            if(d.parent[i]==i) cntc++;
        }
        return cntextra>=cntc-1?cntc-1:-1;
    }
};