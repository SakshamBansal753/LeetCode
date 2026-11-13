class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
    int n=grid.size();
    int m=grid[0].size();
    vector<vector<int>>maxLocal(n-2,vector<int>(n-2));
    for(int i=0;i<n-2;i++){
        for(int j=0;j<n-2;j++){
            for(int l=i;l<i+3;l++){
                for(int k=j;k<j+3;k++){
                    maxLocal[i][j]=max(maxLocal[i][j],grid[l][k]);
                }
            }
        }
   
    }
     return maxLocal;}
    
};