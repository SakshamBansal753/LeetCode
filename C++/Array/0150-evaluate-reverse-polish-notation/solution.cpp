class Solution {
public:
    bool isnumber(string k) {
        return k != "+" && k != "-" && k != "*" && k != "/";
    }
    int calculation(int  j,int  m,string op){
        if(op=="+") return  j+m;
        if(op=="/") return j/m;
        if(op=="-") return j-m;
        if(op=="*") return j*m;
        return 0;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        int n=tokens.size();
        for(string k:tokens){
            if(isnumber(k)){
                s.push(stoi(k));
            }else{
                int  j=s.top();
                s.pop();
                int m=s.top();
                s.pop();
                int l=calculation(m,j,k);
                s.push(l);
            }
        }
        return s.top();

    }
};