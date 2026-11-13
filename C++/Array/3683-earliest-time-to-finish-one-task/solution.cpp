class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int mi=INT_MAX;
        for(auto &task:tasks){
            mi=min(mi,task[1]+task[0]);
        }
        return mi;
    }
};