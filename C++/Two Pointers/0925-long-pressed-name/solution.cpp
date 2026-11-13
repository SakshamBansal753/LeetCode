class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        
        if(name[0]!=typed[0]||typed.size()<name.size())return false;
        int i=0,j=0;
        for(int j=0; j<typed.size(); j++)
        {
            if(typed[j]==name[i])
            {
                i++;
            }
            else
            {
                if(typed[j]==typed[j-1])continue;
                else return false;
                
            }
        }
        if(i!=name.size())return false;
        return true;
    }
};