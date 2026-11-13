class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        vector<int> v(n);

        for(int i = 0;i<n;i++){
            v[i] = (dist[i] + speed[i] -1)/speed[i];
        }

        sort(v.begin(), v.end());

        for(int i = 0; i < n; i++){
            if(v[i] <= i) return i;
        }

        return n;
    }
};