class Solution {
public:
  bool isPrime(int n) {
        if(n < 2) return false;
        for(int i = 2; i * i <= n; ++i)
            if(n % i == 0)
                return false;
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int j=0;
        for(int i=left;i<=right;i++){
            int m=i;
            int sum=0;
            while(m){
                sum+=m%2;
                m/=2;
            }
            if(isPrime(sum)){
                j++;
            }
        }
        return j;
    }
};