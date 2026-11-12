class Solution {
public:
    int residuePrefixes(string s) {
        set<char>st;
        int cnt=0;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(st.find(s[i])==st.end()){
                cnt++;
                
            }
            if(cnt==(i+1)%3){
                ans++;
            }
            st.insert(s[i]);
        }
        return ans;
    }
};