class Solution {
public:
    int edgeScore(vector<int>& edges) {
        int n=edges.size();
        unordered_map<int,long long>m;
       for (int i = 0; i < n; i++) {
            m[edges[i]] += i;
        }
        long long ans=-1;
        int node=n;
        for(int i=0;i<n;i++){
            if(m.find(i)!=m.end()){
              if(m[i] > ans) {
                ans = m[i];
                node = i;
            }
            else if(m[i] == ans) {
                node = min(node, i);
            }
            }
        }
        return node;
    }
};