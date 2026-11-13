class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>s;
        for(int i=0;i<logs.size();i++){
            
                if(!s.empty()&&logs[i]=="../"){
                    s.pop();
                    continue;
                }else if( !s.empty()&&logs[i]=="./"){
                    continue;

                }else if(s.empty()&&logs[i]=="../"){
                    continue;
                }else if(s.empty()&&logs[i]=="./"){
                    continue;
                }
            
                s.push(logs[i]);
            }
               
                
        
         int operations=0;
         while(!s.empty()){
                    operations+=1;
                    s.pop();
                }
        return operations;
    }
};