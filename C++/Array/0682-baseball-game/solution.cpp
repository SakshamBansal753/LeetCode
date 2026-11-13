class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>s;
        for(int i=0;i<operations.size();i++){
            if(!s.empty()&&operations[i]=="C"){
                s.pop();
            }else if(!s.empty()&&operations[i]=="D"){
                s.push(s.top()*2);
            }
            else if(!s.empty()&&operations[i]=="+"){
               if(s.size()>=2){
                int t1=s.top();s.pop();
                int t2=s.top();
                s.push(t1);
                s.push(t1+t2);
               }
                }else{
            s.push(stoi(operations[i]));
            }        }
       int add=0;
       while(!s.empty()){
        add+=s.top();
        s.pop();
       }
       return add;
    }
};