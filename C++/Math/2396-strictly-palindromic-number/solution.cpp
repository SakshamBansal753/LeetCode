class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        
        for(int i=2;i<=n-2;i++){
            int temp=n;
            string dig="";
            while(temp>0){
                dig=to_string(temp%i)+dig;
                temp/=i;
            }
            string re=dig;
            reverse(re.begin(),re.end());
            if(dig!=re) return false;
        }
        return true;
    }
};