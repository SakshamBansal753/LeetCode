class Solution {
public:
    bool detectCapitalUse(string word) {
       int iscap=0;
       for(char c:word){
        if(c==toupper(c)){
            iscap++;
        }
       }
       if(iscap==word.length()||iscap==0||(iscap==1&&word[0]==toupper(word[0]))){
        return true;
       }
       return false;
    }
};