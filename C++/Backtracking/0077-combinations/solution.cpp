class Solution {
public:
vector<vector<int>>ans;
void back(vector<int>&a,int st,int n,int k){
    if(a.size()==k){
        ans.push_back(a);
        return ;

    }
    for(int i=st;i<=n;i++){
        a.push_back(i);
        back(a,i+1,n,k);
        a.pop_back();
    }
    return ;
}
    vector<vector<int>> combine(int n, int k) {
        vector<int>a;
        back(a,1,n,k);
        return ans;
    }
};