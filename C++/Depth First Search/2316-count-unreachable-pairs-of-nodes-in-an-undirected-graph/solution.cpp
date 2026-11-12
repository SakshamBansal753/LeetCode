class disjointset{
    public:
    vector<int>size,parent;
    disjointset(int n){
        size.resize(n+1,1);
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
    void unions(int u,int v){
        int ul_u=findpar(u);
        int ul_v=findpar(v);
        if(ul_u==ul_v) return ;
        if(size[ul_u]<size[ul_v]){
            size[ul_v]+=size[ul_u];
            parent[ul_u]=ul_v;
        }
        else{
            parent[ul_v]=ul_u;
             size[ul_u]+=size[ul_v];
        }
        return ;
    }
};
class Solution {
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        disjointset ds(n);
        for(auto & edge:edges){
            ds.unions(edge[0],edge[1]);
        }
        long long ans=0;
        long long remain=n;
        for(int i=0;i<n;i++){
            if(ds.findpar(i)==i){
                ans+=1LL*ds.size[i]*(remain-ds.size[i]);
                remain-=ds.size[i];
            }
        }
        return ans;


    }
};