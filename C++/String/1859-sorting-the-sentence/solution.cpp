class Solution {
public:
    string sortSentence(string s) {
        vector<string>pos(26,"");
        string word="";
        for(char a :s){
            if(isdigit(a)){
                pos[a-'0']=word;
                word="";
                continue;
            }
            if(a==' ') continue;
            word+=a;
        }
        string ans="";
        for(int i=0;i<26;i++){
            if(pos[i].length()>0){
                ans+=pos[i];
                ans.push_back(' ');
            }
        }
        ans.pop_back();
        return ans;
    }
};