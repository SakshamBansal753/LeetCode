class Solution {
public:
    bool checkGoodInteger(int n) {
        long long digitsum=0,squaresum=0;
       string s=to_string(n);
      for(int i=s.length()-1;i>=0;i--){
        int k=s[i]-'0';
        digitsum+=k;
        squaresum+=(k*k);

      }
      return (squaresum-digitsum)>=50;
    }
};