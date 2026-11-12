class Solution {
public:
    bool ispalindrome(string s){
        string k=s;
        reverse(k.begin(),k.end());
        return k==s;
    }
    void part(string s,vector<vector<string>>&ans,vector<string>&p){
        if(s.length()==0){
            ans.push_back(p);
            return;
        }
        for(int i=0;i<s.length();i++){
            string temp = s.substr(0, i + 1);
            if(ispalindrome(temp)){
                p.push_back(temp);
                part(s.substr(i+1),ans,p);
                p.pop_back();
            }
        }
        return;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>palin;
        part(s,ans,palin);
        return ans;
    }
};