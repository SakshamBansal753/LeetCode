class Solution {
public:
    bool judgeCircle(string moves) {
        if(moves.length()==0)return true;
        int x=0;
        int y=0;
        for(char c:moves){
            if(c=='U'){
                y++;
            }else if(c=='D'){
                y--;
            }else if(c=='L'){
                x++;
            }else{
                x--;
            }
        }
        return x==0&&y==0;
    }
};