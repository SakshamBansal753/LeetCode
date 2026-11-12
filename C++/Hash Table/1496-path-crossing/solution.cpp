class Solution {
public:
    bool isPathCrossing(string path) {
        map<pair<int,int>,int>m;
        int x=0,y=0;
        m[{0,0}]=1;
        for(char c:path){
            if(c=='N'){
                y++;
            }else if(c=='S'){
                y--;
            }else if(c=='E'){
                x++;
            }else{
                x--;
            }
            if(m.find({x,y})!=m.end()){
                return true;
            }
            m[{x,y}]++;
        }
        return false;
    }
};