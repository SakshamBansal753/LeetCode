class Solution {
public:
    string interpret(string command) {
        int n=command.length();
        string ans="";
        int i=0;
        while(i<n){
            if(command[i]=='('&&command[i+1]==')'){
                ans+='o';
                i+=2;
            }else if(command[i]=='('&&command[i+1]=='a'){
                ans+="al";
                i+=4;
            }else{
                ans+=command[i];
                i++;
            }
        }
       
       
        return ans;
    }
};