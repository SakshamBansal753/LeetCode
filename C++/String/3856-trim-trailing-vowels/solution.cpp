class Solution {
public:
    bool isvowel(char c){
        if((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')){
            return true;
        }
        return false;
    }
    string trimTrailingVowels(string s) {
        int n=s.length();
        if(n==0||!isvowel(s[n-1])){
            return s;
        }
       
        int i=n-1;
        while(i>=0&&isvowel(s[i])){
            i--;
        }
            
        
        return s.substr(0,i+1);
    }
};