class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int>indegree(n,0);
        for(auto edge :edges){
            indegree[edge[1]]++;
        }
        int champcount=0,champ=-1;
       for(int i=0;i<n;i++){
        if(!indegree[i]){
            champcount++;
            champ=i;
        }
       }
        return champcount>1?-1:champ;
    }
};