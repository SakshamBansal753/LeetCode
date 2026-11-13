class Solution {
public:
    bool isPowerOfTwo(int n) {
       int st=0;int last=n;
       while(st<=last){
       int mid=st+(last-st)/2;
        if(pow(2,mid)==n){
            return true;
        }
        if(pow(2,mid)<n){
            st=mid+1;
            
        }
        else if(pow(2,mid)>n){
            last=mid-1;
            
        }
       }
       return false;
    }
};