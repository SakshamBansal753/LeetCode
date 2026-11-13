class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>ans(n,0);
        if(k==0) return ans;
        if(k>0){
            for(int i=0;i<n;i++){
                int temp=0;
                for(int j=0;j<k;j++){
                    int idx=(i+j+1)%n;
                    temp+=code[idx];
                }
                ans[i]=temp;
            }
            return ans;
        }else{
            k=abs(k);
            for(int i=0;i<n;i++){
                int temp=0;
                for(int j=0;j<k;j++){
                    int idx=(i-j+n-1)%n;
                    temp+=code[idx];
                }
                ans[i]=temp;
            }
             return ans;
        }
        return ans;
    }
};