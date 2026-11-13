class Solution {
public:
    string reversePrefix(string word, char ch) {
       int index=-1;
       index=word.find(ch);
       if(index==-1){
        return word;
       }
       reverse(word.begin(),word.begin()+index+1);
       return word;
    }
};