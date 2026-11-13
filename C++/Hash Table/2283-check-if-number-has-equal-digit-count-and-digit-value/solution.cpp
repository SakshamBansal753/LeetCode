class Solution {
public:
    bool digitCount(string num) {
         vector<int>fre(10,0);
         for(char c:num){
            fre[c-'0']++;
         }
         for(int i=0;i<num.length();i++){
            if(fre[i]!=num[i]-'0'){
                return false;
            }
         }
         return true;

    }
};