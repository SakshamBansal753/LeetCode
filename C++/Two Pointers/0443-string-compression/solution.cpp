class Solution {
public:
    int compress(vector<char>& chars) {
       int n=chars.size();
       int idx=0;
       int i=0;
       while(i<n){
        int cnt=0;
        char ch=chars[i];
        while(i<n&&chars[i]==ch){
            cnt++;
            i++;
        }
        chars[idx++]=ch;
        if(cnt>1){
            string k=to_string(cnt);
            for(char m:k){
                chars[idx++]=m;
            }
        }
        
       }
       return idx;
    }
};