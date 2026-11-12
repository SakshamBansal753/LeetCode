class Solution {
public:
    bool isPalindromic(string s) {
        string b="";
        for(char c:s){
            int k=int(c);
            string bin=bitset<8>(k).to_string();
            b+=bin;
        }
        int i=0;
        int n=b.length();
        int r=n-1;
        while(i<r){
            if(b[i]!=b[r]) return false;
            i++;
            r--;
        }
        return true;
    }
};