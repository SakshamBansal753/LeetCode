class Solution {
public:
    vector<int> countOfPairs(int n, int x, int y) {
        vector<vector<int>>grid(n+1,vector<int>(n+1,10000));
        for(int i=1;i<n;i++){
            grid[i][i+1]=1;
            grid[i+1][i]=1;
        }
        grid[x][y]=1;
        grid[y][x]=1;
        vector<int>ans(n);
        for(int k=1;k<=n;k++){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    grid[i][j]=min(grid[i][j],grid[i][k]+grid[k][j]);
                }
            }
        }
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if(i != j) {
                    int val = grid[i][j];
                    ans[val-1]++;
                }
            }
        }
        return ans;
    }
};