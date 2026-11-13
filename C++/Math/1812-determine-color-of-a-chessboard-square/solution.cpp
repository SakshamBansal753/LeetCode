class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int m=coordinates[0]-'a';
        int j=coordinates[1]-'0';
        return (m+j)%2==0?true:false;
    }
};