class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int k=num;
        while(k){
            int d=k%10;
            if(num%d==0){
                count++;
            }
            k/=10;
        }
        return count;
    }
};