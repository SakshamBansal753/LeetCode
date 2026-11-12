class Solution {
public:
    long long minimumSteps(string s) {
        long long bp=0;
        int n=s.length();
        long long tp=0;
       
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                tp+=i-bp;
                bp++;
            }
        }
        return tp;
    }
};