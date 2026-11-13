class Solution {
public:

    int subtractProductAndSum(int n) {
        int a=n;
        int sum=0;
        int product=1;
        while(a!=0){
            int b=a%10;
            sum+=b;
            product*=b;
            a=a/10;
        }
        return (product-sum);
    }
};