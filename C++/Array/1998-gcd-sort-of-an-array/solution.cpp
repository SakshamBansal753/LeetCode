class Solution {
public:
 vector<int> parent;
    
    int find(int x) {
        if (parent[x] != x) parent[x] = find(parent[x]);
        return parent[x];
    }
    
    void unite(int x, int y) {
        parent[find(x)] = find(y);
    }
    bool gcdSort(vector<int>& nums) {
        int n = *max_element(nums.begin(), nums.end());
        parent.resize(n + 1);
        for (int i = 0; i <= n; ++i) parent[i] = i;
        
        for (int num : nums) {
            int x = num;
            for (int p = 2; p * p <= x; ++p) {
                if (x % p == 0) {
                    unite(num, p);
                    while (x % p == 0) x /= p;
                }
            }
            if (x > 1) unite(num, x);
        }
        
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        
        for (int i = 0; i < nums.size(); ++i) {
            if (find(nums[i]) != find(sorted[i])) {
                return false;
            }
        }
        return true;
    }
};