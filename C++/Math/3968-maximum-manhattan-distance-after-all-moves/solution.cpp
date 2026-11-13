class Solution {
public:
    int maxDistance(string moves) {if(moves.length()==0) return 0;
        int x=0,y=0,u=0;

        for(char c:moves){
        
            if(c=='U'){
                y++;
            }else if(c=='L'){
                x--;
            }else if(c=='D'){
                y--;
            }else if(c=='R'){
                x++;
            }else{
            u++;}
        }
        return abs(x)+abs(y)+u;
    }
};