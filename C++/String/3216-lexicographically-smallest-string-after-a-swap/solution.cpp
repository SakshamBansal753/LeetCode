class Solution {
public:
    string getSmallestString(string s) {
        string m=s;
        for(int i=0;i<s.length()-1;i++){
            int val=s[i]-'0';
            int val2=s[i+1]-'0';
            if(val2%2==0&&val%2==0){
                if(val>val2){
                    swap(m[i],m[i+1]);
                    break;
            }
            }else if(val2%2!=0&&val%2!=0){
                if(val>val2){
                    swap(m[i],m[i+1]);
                    break;
            }
            }
        }
        return m;
    }
};