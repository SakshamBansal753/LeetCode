class Solution {
public:
bool palindrome(string s){
    int st=0;
    int k=s.length()-1;
    while(st<=k){
        if(s[st]!=s[k]) return false;
        st++;
        k--;
    }
    return true;
}
    string firstPalindrome(vector<string>& words) {
        for (string s:words){
            if(palindrome(s)) return s;
        }
        return "";
    }
};