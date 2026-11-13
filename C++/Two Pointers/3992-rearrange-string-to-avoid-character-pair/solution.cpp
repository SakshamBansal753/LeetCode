class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int n=s.length();
        int l=0;
        int r=n-1;
        for(int i=0;i<n;i++){
            if(s[i]==x){
                swap(s[i],s[r]);
                r--;
            }
            if(s[i]==y){
                swap(s[i],s[l]);
                l++;
            }
            if(l>=r){
                break;
            }
        }
        return s;
    }
};