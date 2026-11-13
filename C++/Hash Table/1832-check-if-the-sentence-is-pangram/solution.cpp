class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.length()<26){
            return false;
        }
        set<char>s;
        for(char c:sentence){
            s.insert(c);
        }
        if(s.size()>=26){
            return true;
        }
        return false;

    }
};