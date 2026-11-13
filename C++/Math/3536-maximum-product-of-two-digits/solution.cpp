class Solution {
public:
    int maxProduct(int n) {
       vector<int>ans;
       int m=n;
       while(m!=0){
        ans.push_back(m%10);
        m/=10;
       }
       sort(ans.begin(),ans.end());
       return (ans[ans.size()-1]*ans[ans.size()-2]);
       
    }
};