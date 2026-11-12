class Solution {
public:
    int maxDepth(string st) {
        stack<pair<char,int>>s;
        int cnt=0;
        for(char c:st){
            if(c=='('){
                cnt++;
              
            }if(c==')'){
                cnt--;
                
            }
            s.push({c,cnt});
        }
        int ans=0;
        while(!s.empty()){
            if(s.top().second>ans){
                ans=s.top().second;
                
            }
            s.pop();
        }
        return ans;
        
    }
};