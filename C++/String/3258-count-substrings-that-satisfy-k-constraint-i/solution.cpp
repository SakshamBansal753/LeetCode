class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int n=s.size();
        int l=0, r=0,zeroes=0,ones=0,ans=0;
        while(r<n){
          if(s[r]=='0')zeroes++;
            else ones++;
            while(zeroes>k and ones>k){
                if(s[l]=='0') zeroes--;
                else ones--;
                l++;
            }
            ans+=r-l+1;
            r++;
            
        }
        return ans;
        
    }
};