class Solution {
public:
    int heightChecker(vector<int>& heights) {
       int n=heights.size();
       if(n==0||n==1) return 0;
       int cnt=0;
       vector<int>ans=heights;
       sort(heights.begin(),heights.end());
       for(int i=0;i<n;i++){
        if(heights[i]!=ans[i]) cnt++;
       }
       return cnt;
    }
};