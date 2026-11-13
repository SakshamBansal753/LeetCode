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
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        int maxr=0,maxc=0;
        for(auto it:stones){
            maxr=max(maxr,it[0]);
            maxc=max(maxc,it[1]);
        }
        unordered_map<int,int>stonen;
        disjointset d(maxr+maxc+1);
        for(auto it:stones){
            int norder=it[0];
            int nordec=it[1]+maxr+1;
            d.unions(norder,nordec);
            stonen[nordec]++;
            stonen[norder]++;
        }

        int cnt=0;

        for( auto it : stonen){
            if(d.findpar(it.first)==it.first)
            cnt++;
        }
        return n-cnt;
    }
};