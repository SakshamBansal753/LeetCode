class Solution {
public:
   
    int longestBeautifulSubstring(string word) {
        int cnt=1;
        int max_len=0;
        int len=1;
        int n=word.size();
        for(int i=1;i<n;i++){
            if(word[i]==word[i-1]){
                len++;
            }else if(word[i]>word[i-1]){
                cnt++;
                len++;
            }else{
                cnt=1;
                len=1;
            }
            if(cnt==5){
                max_len=max(max_len,len);
            }
        }
        return max_len;

    }
};