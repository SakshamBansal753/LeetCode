class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int ans = 0 , n = grid.size() , count = 0;
        
        for(int j = 0; j<n; j++){
            int max_elem = INT_MIN;
            for(int i = 0; i<n; i++){
                max_elem = max(max_elem,grid[i][j]);
                
                if(grid[i][j] != 0)
                count++;
            }
            ans += max_elem;
        }

        ans += count;
        for(int i = 0; i<n; i++){
            int max_elem = INT_MIN;
            for(int j = 0; j<n; j++){
                max_elem = max(max_elem,grid[i][j]);
            }
            ans += max_elem;
        }
        return ans;
    }
};