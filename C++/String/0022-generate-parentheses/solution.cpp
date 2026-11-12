class Solution {
public:
   void back(int n,string s,vector<string>&ans,int open,int closed){
    if(s.length()==n*2){
        ans.push_back(s);
        return ;
    }
    if(open<n){
        back(n,s+'(',ans,open+1,closed);
    }
    if(closed<open){
        back(n,s+')',ans,open,closed+1);
    }
   }
    vector<string> generateParenthesis(int n) {
        if(n==0){
            return {};
        }
        vector<string>ans;
        back(n,"",ans,0,0);
        return ans;
    }
};