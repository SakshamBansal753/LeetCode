class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>ans(n-k+1,vector<int>(m-k+1));
        for(int i=0;i<=n-k;i++){
            for(int j=0;j<=m-k;j++){
                vector<int>num;
                for(int x=i;x<i+k;x++){
                    for(int y=j;y<j+k;y++){
                        num.push_back(grid[x][y]);
                    }
                }
                sort(num.begin(),num.end());
                int d=INT_MAX;
                for(int k=1;k<num.size();k++){
                    if(num[k]!=num[k-1]){
                        d=min(d,abs(num[k]-num[k-1]));
                    }
                }
                ans[i][j]=(d==INT_MAX)?0:d;
            }
        }
        return ans;
    }
};