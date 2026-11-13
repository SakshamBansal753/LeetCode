class Solution {
public:
    bool canAliceWin(int n) {
        int m=n;
        if(n<10){
            return false;
        }
        if(n==10){
            return true;
        }
        int i=10;
       int f=1;
        while(n>=i){
            n-=i;
            i--;
            f*=-1;
        }
        return f==-1;
    }
};