class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        if (need1 >= need2) {
            return min(1LL * cost1 + cost2, 1LL * costBoth) * need2
                 + min(1LL * cost1, 1LL * costBoth) * (need1 - need2);
        } 
        else {
            return min(1LL * cost1 + cost2, 1LL * costBoth) * need1
                 + min(1LL * cost2, 1LL * costBoth) * (need2 - need1);
        }
    }
};