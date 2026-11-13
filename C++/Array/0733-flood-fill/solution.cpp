class Solution {
public:
void dfs(int org,int i,int j,vector<vector<int>>&ans,vector<vector<int>>&image,int newcolor){
    if(i<0||j<0||i>=image.size()||j>=image[0].size()||ans[i][j]!=org||ans[i][j]==newcolor) return;
    ans[i][j]=newcolor;
    dfs(org,i-1,j,ans,image,newcolor);
    dfs(org,i+1,j,ans,image,newcolor);
    dfs(org,i,j-1,ans,image,newcolor);
    dfs(org,i,j+1,ans,image,newcolor);
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int org=image[sr][sc];
        vector<vector<int>>ans=image;
        dfs(org,sr,sc,ans,image,color);
        return ans;
    }
};