class Solution {
public:
    int minAddToMakeValid(string st) {
        stack<char>s;
        int cnt=0;
        for(char ch:st){
            if(ch=='('){
                s.push(ch);
            }else{
                if(s.empty()){
                    cnt++;
                }else{
                    s.pop();
                }
            }
        }
        cnt+=s.size();
        return cnt;
    }
};