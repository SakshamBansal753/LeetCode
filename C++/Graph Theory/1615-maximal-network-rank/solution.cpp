class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int>deg(n,0);
        set<pair<int,int>>mm;
        for(auto edge:roads){
            deg[edge[0]]++;
            deg[edge[1]]++;
            mm.insert({edge[0],edge[1]});
            mm.insert({edge[1],edge[0]});
        }
        int mr=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int rank=deg[i]+deg[j];
                if(mm.find({i,j})!=mm.end()) rank--;
                mr=max(mr,rank);
            }
        }
        return mr;

    }
};