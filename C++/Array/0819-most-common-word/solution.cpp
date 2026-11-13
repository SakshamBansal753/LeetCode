class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
       unordered_map<string,int>m;
       string word="";
       for (char c:paragraph){
            if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
                word+=tolower(c);
            }else{
              if (word != "") {   
                    m[word]++;
                    word = "";
                }
            }
       }
       if(word!="") m[word]++;
       for (string s:banned){
        if(m.find(s)!=m.end()) m.erase(s);
       }
       string ans="";
       int max=INT_MIN;
       for(auto it:m){
        if(it.second>max){
            ans=it.first;
            max=it.second;
        }
       }
       return ans;
    }
};