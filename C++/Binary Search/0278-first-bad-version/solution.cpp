// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int st=0;
        int end=n;
        int first=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(!isBadVersion(mid)){
                st=mid+1;
            }else{
                first=mid;
                end=mid-1;
            }
        }
        return first;
    }
};