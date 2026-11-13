class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
     vector<vector<int>> matrix(n, vector<int>(n, 0));
        int srow = 0, scol = 0, erow = n - 1, ecol = n - 1;
        int num = 1;
        
        while (srow <= erow && scol <= ecol) {
            for (int j = scol; j <= ecol; j++) {
                matrix[srow][j] = num++;
            }
            srow++;
            
            if (scol <= ecol) {
                for (int i = srow; i <= erow; i++) {
                    matrix[i][ecol] = num++;
                }
                ecol--;
            }
            
            if (srow <= erow) {
                for (int j = ecol; j >= scol; j--) {
                    matrix[erow][j] = num++;
                }
                erow--;
            }
            
            if (scol <= ecol) {
                for (int i = erow; i >= srow; i--) {
                    matrix[i][scol] = num++;
                }
                scol++;
            }
        }
        
        return matrix;
    }
};