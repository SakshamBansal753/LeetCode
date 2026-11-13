class Solution {
public:
    string reverseByType(string s) {
        string letter="";
        string specials="";
        for(char c:s){
            if(c>='a'&c<='z'){
                letter.push_back(c);
            }else{
                specials.push_back(c);
            }
        }
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='a'&&s[i]<='z'){
                ans.push_back(letter.back());
                letter.pop_back();
            }else{
                ans.push_back(specials.back());
                specials.pop_back();
            }
        }
        return ans;
    }
};