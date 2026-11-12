class Solution {
public:
    bool doesAliceWin(string s) {
       if(s.length()==0) return false;
        for(char ch:s){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                return true;
            }
        }
        return false;
    }
};