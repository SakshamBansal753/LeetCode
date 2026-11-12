class Solution {
public:
    bool isValid(string st) {
       stack<char>s;
       for(char c:st){
        if(c=='('||c=='['||c=='{'){
            s.push(c);
        }else{
            if(s.empty()) return false;
            char k=s.top();
            if((k=='('&&c==')')||(k=='['&&c==']')||(k=='{'&&c=='}')){
                s.pop();
            }else{
                return false;
            }
        }
       }
       return s.empty();
    }
};