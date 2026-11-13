class Solution {
public:
    int mySqrt(int x) {
 int st=1;
 int end=x;
 int ans=x;
 if(x==1) return 1;
 if(x<0) return -1;
 while(st<=end){
    unsigned long long  mid=st+(end-st)/2;
    if(mid*mid<=x){
        st=mid+1;
        ans=mid;
    }else if(mid*mid==x){
        return mid;
    }else{
        end=mid-1;
    }
 }
 return ans;
    }
};