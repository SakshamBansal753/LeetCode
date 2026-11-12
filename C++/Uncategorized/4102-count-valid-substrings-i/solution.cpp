using ll=long long;
class Solution {
public:
    long long countValidSubstrings(string s) {
        int n=s.length();
        int l=0;
        int r=0;
        ll ans=0;
        while(l<n&&r<n){
            if(r>=2&&s[r]=='c'&&s[r-1]=='b'&&s[r-2]=='a'){
                l=r-1;
            }
            ans+=r-l+1;
            r++;
        }
        return ans;
    }
};