class Solution {
public:
        bool digit(int n){
            int b=n;
            while(b){
                if(b%10==0){
                    return false;
                }
                b/=10;
            }
            return true;
        }
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<n;i++){
            if(digit(i)&&digit(n-i)){
                return {i,n-i};
            }
        }
        return {};
    }
};