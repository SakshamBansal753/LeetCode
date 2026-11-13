class Solution {
public:
    int rotatedDigits(int n) {
        int count=0;
        for(int i=1;i<=n;i++){
            int dig=i;
            bool isvalid=true;
            bool change=false;
            while(dig){
                int k=dig%10;
                if(k==3|k==4|k==7){
                    isvalid=false;
                    break;
                }
                if(k==2|k==5|k==6|k==9){
                    change=true;
                    
                }
                dig=dig/10;
            }
            if(isvalid&&change){
                count++;
            }
        }
        return count;
    }
};