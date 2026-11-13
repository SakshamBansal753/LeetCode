class Solution {
public:
    bool isSameAfterReversals(int num) {
        int k=num;
        int s=0;
        while(k){
            s=s*10+k%10;
            k=k/10;

        }
        int j=0;
        while(s){
             j=j*10+s%10;
            s=s/10;
        }
        return j==num;
    }
};