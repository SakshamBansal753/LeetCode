class Solution {
public:
    int numTrees(int n) {
             vector<int> ans(n +1, 0);
        ans[0] =1;
         ans[1] = 1;

        for (int i = 2; i <= n; ++i) {
            for (int r = 1; r <= i; ++r) {
                int left = r - 1;
                int right = i - r;
                ans[i] += ans[left] * ans[right];
            }
        }

        return ans[n];
    
    }
};