class Solution {
public:
    int numberOfChild(int n, int k) {
        int st=0;
        int end=n-1;
        int j=0;
        int t=0;
        int x=1;
        while(t!=k){
            t++;
            if(j==n-1){
                x=-1;
            }else if(j==0){
                x=1;
            }
            j+=x;

          
          
        }
        return j;
    }
};