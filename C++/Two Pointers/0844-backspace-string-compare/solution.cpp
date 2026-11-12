class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char>a1,a2;
        for(char c:s){
            if(a1.size()!=0&&c=='#'){
                a1.pop_back();
            }else if(a1.size()==0&&c=='#'){
                continue;
            }else{
                a1.push_back(c);
            }
        }
        for(char c:t){
              if(a2.size()!=0&&c=='#'){
                a2.pop_back();
            }else if(a2.size()==0&&c=='#'){
                continue;
            }else{
                a2.push_back(c);
            }
        }
        return a1==a2;

    }
};