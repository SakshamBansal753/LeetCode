class Solution {
public:
    
    int minCost(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        if (m == 1 && n == 1)
            return grid[0][0];
        vector<vector<vector<vector<int>>>>graph(n,vector<vector<vector<int>>>(m,vector<vector<int>>(4,vector<int>(k+1,1e9))));
        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};
        priority_queue<tuple<int,int,int,int,int>,vector<tuple<int,int,int,int,int>>,greater<tuple<int,int,int,int,int>>>pq;
        for(int i=0;i<4;i++){
            int nr=dr[i];
            int nc=dc[i];
            if(nr>=0&&nc>=0&&nr<n&&nc<m){
                int cost=grid[nr][nc]+grid[0][0];
                graph[nr][nc][i][0]=cost;
                pq.push({cost,nr,nc,i,0});
            }
        }
        while(!pq.empty()){
            auto [cost,i,j,dir,trn]=pq.top();
            pq.pop();
            if(cost!=graph[i][j][dir][trn]) continue;
            if(i==n-1&&j==m-1) return cost;
            for(int l=0;l<4;l++){
                int nr=i+dr[l];
                int nc=j+dc[l];
               if(nr<0 || nc<0 || nr>=n || nc>=m)  continue;
                int nt=trn;
                if(l!=dir){
                    nt++;
                }
                if(nt>k){
                    continue;
                }
                int newcost=cost+grid[nr][nc];
                if(newcost<graph[nr][nc][l][nt]){
                    graph[nr][nc][l][nt]=newcost;
                    pq.push({newcost,nr,nc,l,nt});
                }
            }
        }
        return -1;
    }
};