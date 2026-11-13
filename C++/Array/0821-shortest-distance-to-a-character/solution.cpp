class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
         int i=0;
        int n=s.length();
        int r=n-1;
        int idx=0;
      while(s[idx]!=c){
        idx++;
      }
        vector<int>ans(n,n);
        while(i<n){
            if(s[i]==c){
                idx=i;
            }
            ans[i]=abs(i-idx);
            i++;
        }
        while(r>=0){
            if(s[r]==c){
                idx=r;
            }
            ans[r]=min(ans[r],abs(idx-r));
            r--;
        }
        return ans;
    }
};