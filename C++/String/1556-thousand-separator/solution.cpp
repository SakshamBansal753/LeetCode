class Solution {
public:
    string thousandSeparator(int n) {
        if(n==0){
            return to_string(n);
        }
        string ans="";
        int k=n;
        int cnt=0;
        while(k){
            ans+=to_string(k%10);
            k/=10;
            cnt++;
            if(cnt==3){
                ans+='.';
                cnt=0;
            }
        }
       
        reverse(ans.begin(),ans.end());
         if(ans[0]=='.'){
            ans=ans.substr(1);
        }
        return ans;
    }
};