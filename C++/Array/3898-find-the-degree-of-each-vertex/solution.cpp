class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();
        
        for (int i = 0; i < n; i++) {
            int cur_deg = 0;
            for (int j = 0; j < n; j++) {
                cur_deg += matrix[i][j];
            }
            ans.push_back(cur_deg);
        }
        
        return ans;
    }
};