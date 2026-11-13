class Solution {
public:
    int arrangeCoins(int n) {
       int coins=n;
       if(n==1){
        return 1;
       }
        int count=0;
        for(int i=0;i<n;i++){
            if(coins>=i){
                count++;
                coins-=i;
            }else{
                break;
            }
        }
    
    return count-1;
    }
};