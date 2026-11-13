class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.length();
        set<char>w{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int m=n/2;
        string s1=s.substr(0,m);
        string s2=s.substr(m,n);
        int cnt=0,j=0;
        for(int i=0;i<m;i++){
            if(w.find(s1[i])!=w.end()){
                cnt++;
            }
            if(w.find(s2[i])!=w.end()){
                j++;
            }
        }
        return cnt==j;
    }
};