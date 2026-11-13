class Solution {
public:
    int numberOfMatches(int n) {
        int k=n;
        int total=0;
        int adv=0;
        while(k>1){
            if(k%2==0){
                total+=k/2;
                k=k/2;
            }else{
                total+=(k-1)/2;
                k=((k-1)/2)+1;
            }
        }
        return total;
    }
};