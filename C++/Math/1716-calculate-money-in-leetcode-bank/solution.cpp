class Solution {
public:
    int totalMoney(int n) {
        int Monday=0;
        int total=0;
        int k=0;
        int previous=0;
        while(k<n){
            if(k%7==0){
                Monday++;
                total+=Monday;
                previous=Monday;
                
            }else{
                total+=previous+1;
                previous++;
            }
            k++;
        }
        return total;
    }
};