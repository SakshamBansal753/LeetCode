class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>m;
        unordered_map<char,char>j;
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<t.length();i++){
            if(m.find(s[i])!=m.end()){
                if(m[s[i]]!=t[i]){
                    return false;
                }
            }
             if(j.find(t[i])!=j.end()){
                if(j[t[i]]!=s[i]){
                    return false;
                }
            }
            m[s[i]]=t[i];
            j[t[i]]=s[i];
        }
        return true;
    }
};