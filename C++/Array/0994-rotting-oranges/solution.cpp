class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        queue<pair<int,pair<int,int>>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({i,{j,0}});
                }
            }
        }
        int ans=0;
        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};
        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second.first;
            int time=q.front().second.second;
            q.pop();
            vis[i][j]=1;
            ans=max(ans,time);
            for(int k=0;k<4;k++){
                int nr=i+dr[k];
                int nc=j+dc[k];
                if(nr>=0&&nr<m&&nc>=0&&nc<n&&!vis[nr][nc]&&grid[nr][nc]==1){
                    grid[nr][nc]=2;
                    q.push({nr,{nc,time+1}});
                }
            }
            
        }
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        return ans;
    }
};