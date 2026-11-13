class Solution {
public:
    bool isCircularSentence(string sentence) {
        int n=sentence.length();
        vector<string>ans;
       string word="";
       for(char c:sentence){
        if(c==' '){
            ans.push_back(word);
            word="";
            continue;
        }
        word+=c;
       }
       if(word!="") ans.push_back(word);
       for(int i=0;i<ans.size();i++){
        int idx=(i+1)%ans.size();
        int j=ans[i].length();
        if(ans[i][j-1]!=ans[idx][0]) return false;
       }
       return true;
    }
};