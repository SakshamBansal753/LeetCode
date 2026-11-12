class Solution {
public:
    int count(int x){
        int cnt=0;
        
        if(x>=0&&x<=9){
            return 1;
        }
        if(x<0){
            cnt++;
            x=-x;
        }
        while(x){
            x=x/10;
            cnt++;
        }
        return cnt;
    }
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int n=grid[0].size();
        int m=grid.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            int maxi=0;
            for(int j=0;j<m;j++){
                maxi=max(maxi,count(grid[j][i]));
            }
            ans[i]=maxi;
        }
        return ans;
    }
};