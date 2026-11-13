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
    int findCircleNum(vector<vector<int>>& isconnected) {
        disjointset d(isconnected.size());
       int n = isconnected.size();

for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
        if(isconnected[i][j] == 1){
            d.unionfind(i, j);
        }
    }
}
        unordered_set<int>s;
        int cnt=0;
        for(int i=0;i<isconnected.size();i++){
            if(!s.count(d.findpar(i))){
                s.insert(d.findpar(i));
                cnt++;
            }
        }
        return cnt;
    }
};