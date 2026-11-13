class Solution {
public:
    int minimumMoves(string s) {
        
        int count=0,i=0;
        while(i<s.size())
        {
            if(s[i]=='O') i++;
            else
            {
                count++;
                i+=3; 
            }
        }
        return count;
    }
};