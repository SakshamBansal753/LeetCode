class Solution {
public:
    int maxPalindromes(string s, int k) {
        int n = s.length();
        int ans = 0;
        int last = -1;
        for(int center=0;center<2*n-1;center++){
            int l = center/2;
            int r = l + center %2;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>=k && l>last){
                    ans++;
                    last=r;
                    break;
                }
                l--;
                r++;
            }
        }
        return ans;
    }
};