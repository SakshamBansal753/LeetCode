class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& A) {
      sort(A.begin(),A.end());
      vector<vector<int>>res;
      int mini=INT_MAX;
      int n=A.size();
      for(int i=1;i<n;i++){
        int diff=A[i]-A[i-1];
        if(diff<mini){
            mini=diff;
            res={};
            res.push_back({A[i-1],A[i]});
        }else if(diff==mini){
            res.push_back({A[i-1],A[i]});
        }
      }
      return res;
    }
};
