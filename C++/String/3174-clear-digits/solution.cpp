class Solution {
public:
bool is_number(char y){
    if(y=='1'||y=='2'||y=='3'||y=='4'||y=='5'||y=='6'||y=='7'||y=='8'||y=='9'||y=='0'){
        return true;
    }
    return false;
}
    string clearDigits(string s) {
        string ans="";
        stack<char>c;
        for(char val:s){
            if(!c.empty()&&is_number(val)){
                c.pop();

            }else{
             c.push(val);
            }
          
        }
        while(!c.empty()){
            ans+=c.top();
            c.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};