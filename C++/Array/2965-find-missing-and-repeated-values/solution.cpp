class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int size=n*n;
        int a=-1;
        int ac=0;
        unordered_set<int>s;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                    ac+=grid[i][j];
                    if(s.find(grid[i][j])!=s.end()){
                        a=grid[i][j];
                    }
                    s.insert(grid[i][j]);
            }
        }
        int expectedSum = size * (size + 1) / 2;
        int b = expectedSum - (ac - a);
        return {a,b};
    }
};