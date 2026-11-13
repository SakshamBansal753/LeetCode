class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string>ans;
        string word="";
        for(char c:text){
            if(isalpha(c)){
                word+=c;
            }else{
                ans.push_back(word);
                word="";
            }
        }
        if(word!="") ans.push_back(word);
        vector<string>m;
        for(int i=0;i<ans.size()-2;i++){
            if(ans[i]==first&&ans[i+1]==second){
            
                m.push_back(ans[i+2]);
            }
        }
        return m;
    }
};