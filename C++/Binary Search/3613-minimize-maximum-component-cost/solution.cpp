class Solution {
public:
    class DisjointSet{
    public:
    vector<int> parent,size;
        
        DisjointSet(int n){
            parent.resize(n),size.resize(n,1);
            for(int i=0;i<n;i++) parent[i]=i;
        }  
        int find(int n){
            if(n==parent[n]) return n;
            return parent[n]=find(parent[n]);
        }
        void merge(int u,int v){
            int pu=find(u),pv=find(v);
            if(pu==pv) return;
            if(size[pu]>size[pv]){
                size[pu]+=size[pv];
                parent[pv]=pu;
            }
            else{
                size[pv]+=size[pu];
                parent[pu]=pv;
            }
        }
    };
    bool verify(int n,vector<vector<pair<int,int>>>&graph,int k){
        DisjointSet dsu(graph.size()+1);
        for(int i=0;i<graph.size();i++){
            for(auto &j:graph[i]){
                int k=j.first;
                int wt=j.second;
                if(wt<=n)dsu.merge(i,k);
            }
        }
        int cnt=0;
        for(int i=0;i<graph.size();i++){
            if(i==dsu.find(i))cnt++;
        }
        return cnt<=k;
    }
    int minCost(int n, vector<vector<int>>& edges, int k) {
        vector<vector<pair<int,int>>>graph(n);
        for(auto &edge:edges ){
            int u=edge[0];
            int v=edge[1];
            int w=edge[2];
            graph[u].push_back({v,w});
            graph[v].push_back({u,w});
        }
        int l=0;
        int high=1e9;
        int ans=0;
        while(l<=high){
            int mid=l+(high-l)/2;
            if(verify(mid,graph,k)){
                ans=mid;
                high=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;

    }
};