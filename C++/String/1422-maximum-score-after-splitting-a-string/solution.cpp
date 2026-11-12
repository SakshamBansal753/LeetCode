class Solution {
public:
  
    int maxScore(string s) {
        int sum=0;
        int sufix=0;
        int prefix=0;
        for(char c:s){
            if(c=='1') prefix++;
        }
        for(int i=0;i<s.length()-1;i++){
            sufix+=(s[i]=='0')?1:0;
            prefix-=(s[i]=='0')?0:1;
            sum=max(sum,sufix+prefix);
        }
        return sum;
    }
};