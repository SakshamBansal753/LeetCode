class Solution {
public:
    bool isThree(int n) {
        if(n==2||n==3||n==1)return false;
        int j=sqrt(n);
        if(j*j!=n) return false;
        for(int i=2;i<j;i++){
            if(j%i==0){
                return false;
            }
        }
        return true;
    }
};