class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long s1=0;
        long long s2=0;
        long long n1=0,n2=0;
        for(int num :nums1){
            if(num==0){
                n1+=1;
            }
            s1+=num;        }
        for(int num :nums2){
            if(num==0){
                n2+=1;
            }
            s2+=num;        }
       long long  int m1=s1+n1;
        long long int m2=s2+n2;
        if(n1==0&&n2==0){
            return s1==s2?s1:-1;
        }else if(n2==0){
            return m1<=s2?s2:-1;
        }else if(n1==0){
            return m2<=s1?s1:-1;
        }else
        return max(m1,m2);


    }
};