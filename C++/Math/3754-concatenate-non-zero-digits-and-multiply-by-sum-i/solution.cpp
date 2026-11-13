class Solution {
public:
    long long sumAndMultiply(int n) {
        int power=1;
        long long int ans=0;
        int a=n;
        long long int sum=0;
        while(a){
            if(a%10==0){
        
                a/=10;

                continue;
            }
            ans+=(a%10)*power;
            sum+=a%10;
            power*=10;
            a/=10;
        }
        return ans*sum;
    }
};