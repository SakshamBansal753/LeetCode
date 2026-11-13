class Solution {
public:
    bool check (vector<vector<pair<int,int>>>& adj,int n,int src,int target,int k,int threshold){
        vector<int>dist(n,INT_MAX);
        dist[src]=0;
        deque<pair<int,int>>dq;
        dq.push_back({0,src});
        while(!dq.empty()){
            auto [heavy,u]=dq.front();
            dq.pop_front();
            if(heavy>dist[u])continue;
            if(heavy>k) continue;
                for(auto &[v,w]:adj[u]){
                int is_h=(w>threshold)?1:0;
                int n_h=heavy+is_h;
                if(n_h<dist[v]){
                    dist[v]=n_h;
                    
                        
                        if(is_h==0){
                            dq.push_front({n_h,v});
                            
                        }else{
                            dq.push_back({n_h,v});
                        }
                    
                }
                }
        }
        return dist[target]<=k;
    }
    int minimumThreshold(int n, vector<vector<int>>& edges, int source, int target, int k) {
        vector<vector<pair<int,int>>>adj(n);
        int maxie=0;
        for(auto &e:edges){
            adj[e[0]].push_back({e[1],e[2]});
            adj[e[1]].push_back({e[0],e[2]});
            maxie=max(maxie,e[2]);
        }
        int st=0,end=maxie,ans=-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(check(adj,n,source,target,k,mid)){
                ans=mid;
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        return ans;
    }
};