class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char>s;
        for(char c:allowed){
            s.insert(c);
        }
        int cnt=0;
        for(string k:words){
            cnt+=1;
            for(char c:k){
                if(s.find(c)==s.end()){
                    cnt-=1;
                    break;
                }
            }
            
        }
        return cnt;
    }
};