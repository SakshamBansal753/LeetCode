class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>m;
        for(char c:s){
            if(m[c]==1){
                return c;
            }
            m[c]++;
        }
        return 'a';
    }
};