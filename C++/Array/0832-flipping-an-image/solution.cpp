class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        for(int i=0;i<n;i++){
            int j=0;
            int k=m-1;
            while(j<=k){
                if(j<k){
                arr[i][j]=arr[i][j]==1?0:1;
                arr[i][k]=arr[i][k]==1?0:1;
                swap(arr[i][j],arr[i][k]);
                }else{
                     arr[i][j]=arr[i][j]==1?0:1;
                }
                
                j++;
                k--;
            }
            

            
        }
        return arr;
    }
};