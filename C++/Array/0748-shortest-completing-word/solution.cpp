class Solution {
public:
    bool isAlpha(char ch) {
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
                return true;
            return false;
     }
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<int>freq(26,0);
        for(char c:licensePlate){
            if(isAlpha(c)){
                char ch=tolower(c);
                freq[ch-'a']++;
            }
        }
        string ans="";
        int mini=1e9;
        int n=words.size();
        for(int i=0;i<n;i++){
            vector<int>temp(26,0);
            for(char c:words[i]){
                temp[c-'a']++;
            }
            bool valid=true;

            for(int k=0;k<26;k++){
                if(freq[k]>temp[k]){
                    valid=false;
                    break;
                }
            }
            if(valid&&mini>words[i].size()){
                ans=words[i];
                mini=words[i].size();
            }
        }
        return ans;
    }
};