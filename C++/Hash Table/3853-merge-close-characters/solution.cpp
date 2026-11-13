class Solution {
public:
    string mergeCharacters(string s, int k) {
  unordered_map<char,int>m;
        int i=0;
        while(i<s.length()){
            if(m.find(s[i])!=m.end()){
                if(abs(m[s[i]]-i)<=k){
                    s.erase(i,1);
                    m.clear();
                    i=0;
                }
                else{
                m[s[i]]=i;
                    i++;
                }
            }else{
                m[s[i]]=i;
                    i++;
                }
            
        }
        return s;
    }
};