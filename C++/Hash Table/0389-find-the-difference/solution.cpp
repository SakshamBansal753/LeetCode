class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>m;
        for(char c:s){
           m[c]++;
        }
        char k=' ';
        for(char c:t){
            if(m.find(c)==m.end()||m[c]==0){
                 k=c;
                break;
            }else{
                m[c]--;
            }
        }
        return k;
    }
};