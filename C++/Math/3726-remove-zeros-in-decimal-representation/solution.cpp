class Solution {
public:
    long long removeZeros(long long n) {
       long long   power=1;
        long long  ans=0;
        long long  a=n;
       
        while(a){
            if(a%10==0){
        
                a/=10;

                continue;
            }
            ans+=(a%10)*power;
           
            power*=10;
            a/=10;
        }
        return ans;
    }
};