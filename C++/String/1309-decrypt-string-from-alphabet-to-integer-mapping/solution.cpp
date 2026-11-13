class Solution {
public:
    string freqAlphabets(string s) {
        string ans="";
        int n=s.length();
        int i=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='#'){
                i-=2;
                string x=s.substr(i,2);
                ans+='a'+(stoi(x)-1);

            }else{
                ans+='a'+(s[i]-'1');
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};