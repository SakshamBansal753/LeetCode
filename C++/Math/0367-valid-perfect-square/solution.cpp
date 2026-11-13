class Solution {
public:
    bool isPerfectSquare(int num) {
       long long int start=1;
       long long int end=num;
        int target=num;
        while(start<=end){
            long long int mid=start+(end-start)/2;
            long long int square=mid*mid;
            if(square==target){
                return true;
            }
            if(square<target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return false;
    }
};