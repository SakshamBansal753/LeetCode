class Solution {
public:
    int numberOfSteps(int num) {
        int x=num;
        int count=0;
        while(x){
            if(x%2==0){
                x/=2;
                
            }else{
                x-=1;
            }
            count++;
        }
        return count;
    }
};