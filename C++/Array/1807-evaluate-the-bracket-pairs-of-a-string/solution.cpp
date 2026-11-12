class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> dict;
        for(auto kd:knowledge){
            dict[kd[0]]=kd[1];
        }
        bool me=false;
        string ans,key;
        for(char c:s){
            if(c=='('){
                me=true;
            }else if(c==')'){
                if(dict.count(key)>0){
                    ans+=dict[key];
                }else{
                    ans.push_back('?');
                }
                me=false;
                key.clear();
            }else if(me){
                key.push_back(c);
            }else{
                ans.push_back(c);
            }
        }
        return ans;
    }
};