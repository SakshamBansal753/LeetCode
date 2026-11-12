class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int small=arrays[0][0];
        int large=arrays[0].back();
        int max_dist=0;
        for(int i=1;i<arrays.size();i++){
            max_dist=max(max_dist,abs(arrays[i].back()-small));
            max_dist=max(max_dist,abs(arrays[i][0]-large));
            small=min(small,arrays[i][0]);
            large=max(large,arrays[i].back());
        }
        return max_dist;
    }
};