class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int mv=0;
        int ps=0;
        for(int n:nums){
            ps+=n;
            mv=min(mv,ps);
        }
        return 1-mv;
    }
};