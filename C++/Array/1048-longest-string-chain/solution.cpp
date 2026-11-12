class Solution {
public:
static bool comp(string &s1,string &s2){
    return s1.size()<s2.size();
}
    int longestStrChain(vector<string>& words) {
       int n=words.size();
       sort(words.begin(),words.end(),comp);
       vector<int>dp(n,1); 
       int maxi=0;
       for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(check(words[i],words[j])){
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
            maxi=max(maxi,dp[i]);
       }
       return maxi;
    }
    bool check(string s1,string s2){
        if(s1.size()!=s2.size()+1) return false;
        int s=0,f=0;
        while(s<s1.size()&&f<s2.size()){
            if(s1[s]==s2[f]){
                f++;
            }
            s++;
        }
        if(f==s2.size()) return true;
        return false;
    }
    
};