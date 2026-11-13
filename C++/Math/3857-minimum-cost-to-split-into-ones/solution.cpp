class Solution {
public:
    int minCost(int n) {
        int j=n;
        int cost=0;
    while(j!=1){
        
        j=j-1;
        cost+=j*1;
        
    }
        return cost;
    }
};