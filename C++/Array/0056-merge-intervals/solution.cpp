class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>>res;
        sort(intervals.begin(),intervals.end());
        int i=0;
        while(i<n){
            int a=intervals[i][0];
            int b=intervals[i][1];
            while(i+1<n&&intervals[i+1][0]<=b){
                b=max(b,intervals[i+1][1]);
                i++;
            }
            res.push_back({a,b});
            i++;
        }
        return res;
    }
};