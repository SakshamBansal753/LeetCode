class Solution {
public:
    string removeDigit(string s, char digit) {
      
       for(int i=0;i<s.length()-1;i++){
        if(s[i]==digit&&(s[i+1]>s[i])){
            s.erase(i,1);
            return s;
        }
       }
       return s.erase(s.find_last_of(digit),1);
    }
};