class Solution {
public:
    int minDeletion(string s, int k) {
        vector<int>m(26,0);
        for(int i=0;i<s.length();i++){
            int c=s[i]-'a';
            m[c]=m[c]+1;
        }
        sort(m.begin(),m.end(),greater<int>());
     int deletions = 0;

        for(int i = k; i < 26; i++){
            deletions += m[i];
        }

        return deletions;
       
    }
};