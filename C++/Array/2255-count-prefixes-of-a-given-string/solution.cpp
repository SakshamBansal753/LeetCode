class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int k=s.length();
        int cnt=0;
        for(auto word:words){
            string m=s.substr(0,word.length());
            if(m==word) cnt++;
        }
        return cnt;
    }
};