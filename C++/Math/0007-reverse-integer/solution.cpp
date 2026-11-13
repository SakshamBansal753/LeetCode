class Solution {
public:
    int reverse(int x) {
    long long int t,sum=0;
        t=x;
        while(t!=0){
            sum=sum*10+t%10;
            t/=10;
              if (sum > INT_MAX || sum < INT_MIN) {
                return 0;
            }
        }
        return (int)sum;
    }
};