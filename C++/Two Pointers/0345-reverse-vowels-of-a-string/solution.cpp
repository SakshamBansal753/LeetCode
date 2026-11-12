class Solution {
public:
    bool isvowel(char c){
        
        return c=='a'||c=='e'||c=='o'||c=='u'||c=='i'||c=='A'||c=='E'||c=='O'||c=='I'||c=='U';
    }
    string reverseVowels(string s) {
        int i=0;
        int n=s.length();
        int j=n-1;
        while(i<j){
            while(i<j&&!isvowel(s[i])){
                i++;
            }
            while(j>i&&!isvowel(s[j])){
                j--;
            }
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};