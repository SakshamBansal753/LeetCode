class Solution {
public:
    static long long calci(int x,int y){
        return 1LL * x * x + 1LL * y * y;
    }
   
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
      priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>>pq;
      for(auto point:points){
        long long value=calci(point[0],point[1]);
        pq.push({value,point[0],point[1]});
        if(pq.size()>k){
            pq.pop();
        }
      }
      vector<vector<int>>ans(k);
      int l=k-1;
      while(!pq.empty()&&l>=0){
       auto [v,x,y]=pq.top();
       ans[l].push_back(x);
       ans[l].push_back(y);
       pq.pop();
       l--;
      }
      return ans;
    }
};