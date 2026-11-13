class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int cnt=0;
        string ans="";
      for (int i = 0; i < s.length(); i++) {
    s[i] = toupper(s[i]);
}
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='-'){
                continue;
            }
            if(cnt==k){
                ans+='-';
                cnt=0;
                
            }
            ans+=s[i];
            cnt++;

        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};