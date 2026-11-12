class Solution {
public:
    string ispalindrome(int left,int right,string s){
        while(left>=0&&right<s.length()&&s[left]==s[right]){
            left--;
            right++;
        }
        return s.substr(left+1,right-left-1);
    }
    string longestPalindrome(string s) {
        int n=s.length();
        string maxi=s.substr(0,1);
        for(int i=0;i<n-1;i++){
            string l1=ispalindrome(i,i,s);
            string l2=ispalindrome(i,i+1,s);
            if(l1.length()>maxi.length()){
                maxi=l1;
            }
            if(l2.length()>maxi.length()){
                maxi=l2;
            }

        }
        return maxi;
    }
};