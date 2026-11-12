class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxi=0;
        int area=0;
        for(auto& it:dimensions){
            int l=it[0];
            int b=it[1];
            long long diagonal=(l*l)+(b*b);
            if(maxi<diagonal){
                maxi=diagonal;
                area=l*b;
            }
            else if(maxi==diagonal){
                area=max(area,l*b);
            }
        }
        return area;
    }
};