class Solution {
public:
    int balancedStringSplit(string s) {
     int balance=0;
     int cnt=0;
     for(char c:s){
        if(c=='R')balance--;
        else{
        balance++;
        }
        if(balance==0){
            cnt++;
        }
     }
     return cnt;
    }
};