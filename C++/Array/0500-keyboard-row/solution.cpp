class Solution {
public:
    vector<string> findWords(vector<string>& word) {
        unordered_map<char,int>m;
        string s="qwertyuiop";
        string k="asdfghjkl";
        string l="zxcvbnm";
        for(char c: s){
            m[c]=1;
        }
         for(char c: k){
            m[c]=2;
        }
         for(char c: l){
            m[c]=3;
        }
        vector<string>ans;
        for(int i=0;i<word.size();i++){
            char c=tolower(word[i][0]);
            int val=m[c];
            int flag=1;
            for(int j=1;j<word[i].length();j++){
                if(m[tolower(word[i][j])]!=val){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                ans.push_back(word[i]);
            }
        }
        return ans;
    }
};