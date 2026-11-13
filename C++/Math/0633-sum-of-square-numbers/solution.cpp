class Solution {
public:
 bool bin(int st,int end,int k){
    while(st<=end){
        long long mid=st+(end-st)/2;
        if(mid*mid==k) return true;
        if(mid*mid<k){
            st=mid+1;
        }else{
            end=mid-1;
        }


    }
    return false;
 }
    bool judgeSquareSum(int c) {
       for(long i=0;i*i<=c;i++){
        int k=c-int(i*i);
        if(bin(0,k,k)) return true;
       }
       return false;
    }
};