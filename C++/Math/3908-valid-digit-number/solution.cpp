class Solution {
public:
    bool validDigit(int n, int x) {
       int num=n;
       int flag=0;
       while(n){
        int b=n%10;
        n/=10;
        
        if(n==0){
            if(b==x) return false;
        }
        if(b==x){
            flag=1;
        }
       } 
       return flag;
    }
};