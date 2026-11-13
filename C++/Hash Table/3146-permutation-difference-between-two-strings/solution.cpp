class Solution {
public:
    int findPermutationDifference(string s, string t) {
            int freq[26]={0};
            for(int i=0;i<s.length();i++){
                freq[s[i]-'a']=i;
            }
            int abssum=0;
            for(int i=0;i<t.size();i++){
                abssum+=abs(i-freq[t[i]-'a']);
            }
            return abssum;
            }
};