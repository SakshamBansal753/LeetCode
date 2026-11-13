class Solution {
public:
    bool checkRecord(string s) {
        int Acount=0;
        int Pcount=0;
        int Lcount=0;
        for(char c:s){
            if(Lcount>=3){
                return false;
            }
            if(c=='A'){
                Acount++;
                Lcount=0;

            }
            if(c=='P'){
                Pcount++;
                Lcount=0;
            }
            if(c=='L'){
                Lcount++;
            }
            if(Acount>=2){
                return false;
            }
            
        }
        return Lcount<3;
    }
};