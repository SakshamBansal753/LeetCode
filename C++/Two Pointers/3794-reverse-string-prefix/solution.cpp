class Solution {
public:
    string reversePrefix(string s, int k) {
        int n = s.size();
        int i=0 ; 
        int j=0 ;
        while(j < k){
            j++;
        }
        reverse(s.begin() , s.begin() + j);
        return s; 
    }
};