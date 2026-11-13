class Solution {
public:
    string defangIPaddr(string adress) {
       string ans="";
       for(int i=0;i<adress.length();i++){
        if(adress[i]=='.'){
           ans+="[.]";
            continue;
        }
        ans.push_back(adress[i]);
       }
       return ans;
    }
};