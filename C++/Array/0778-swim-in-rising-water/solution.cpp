class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n=grid.size();
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pq;
        vector<vector<int>>vis(n,vector<int>(n,0));
        pq.push({grid[0][0],0,0});
        int dr[]={0,1,0,-1};
        int dc[]={-1,0,1,0};
        while(!pq.empty()){
            auto curr=pq.top();
            pq.pop();
            int ele=curr[0],r=curr[1],c=curr[2];
            if(r==n-1&&c==n-1) return ele;
            if(vis[r][c])continue;
            vis[r][c]=1;
            for(int i=0;i<4;i++){
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(nr>=0&&nc>=0&&nr<n&&nc<n&&!vis[nr][nc]){
                    pq.push({max(ele,grid[nr][nc]),nr,nc});
                }
            }
        }
        return -1;
    }
};