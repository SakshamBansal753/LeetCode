#include <vector>
using namespace std;

class Solution {
public:
    long long countSubarrays(vector<int>& a, int x, int y) {
        long long s = 0;
        int n = a.size(), p = -1, l = -1, r = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] < x || a[i] > y) p = i;
            if (a[i] == x) l = i;
            if (a[i] == y) r = i;
            s += max(0, min(l, r) - p);
        }
        return s;
    }
};
