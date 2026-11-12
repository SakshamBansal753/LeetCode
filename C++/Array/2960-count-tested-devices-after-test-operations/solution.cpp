class Solution {
public:
    int countTestedDevices(vector<int>& btrp) {
        int tc = 0;
        for (int bp : btrp) {
            if (bp > tc) tc++;
        }
        return tc;
    }
};