class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        if(s.length()==0){
            return 0;
        }
        int sl=0;
        unordered_map<char,int>m;
        while(r<s.length()){
            if(m.find(s[r])!=m.end()){
                if(m[s[r]]>=l){
                    l=m[s[r]]+1;

                }
            }
            int len=r-l+1;
            sl=max(sl,len);
            m[s[r]]=r;
            r++;
        }
        return sl;
    }
};