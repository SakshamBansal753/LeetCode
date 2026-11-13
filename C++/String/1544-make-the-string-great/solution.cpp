class Solution {
public:
    string makeGood(string str) {
        stack<char>s;
        for(char c:str){
            if(!s.empty()&&(int(s.top())-int(c)==32||int(c)-int(s.top())==32)){
                s.pop();
            }else{
                s.push(c);
            }
        }
        string ans="";
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};