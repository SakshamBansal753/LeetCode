class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string ans="";
        string m="";
        for(int i=0;i<word1.size();i++){
            ans+=word1[i];
        }
         for(int i=0;i<word2.size();i++){
            m+=word2[i];
        }
        return m==ans;
    }

};