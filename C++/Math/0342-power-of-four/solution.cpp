class Solution {
public:
    bool isPowerOfFour(int n) {
        int st=0;int end=n;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(pow(4,mid)==n){
                return true;
            }else if(pow(4,mid)<n){
                st=mid+1;
            }else{
                end=mid-1;
            }

        }
        return false;
    }
};