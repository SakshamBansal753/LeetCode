class SubrectangleQueries {
public:
vector<vector<int>>rectangle;
vector<pair<int,pair<int,pair<int,pair<int,int>>>>>m;
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        this->rectangle=rectangle;
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        m.push_back({row1,{col1,{row2,{col2,newValue}}}});
    }
    
    int getValue(int row, int col) {
        for(int i=m.size()-1;i>=0;i--){
            int row1=m[i].first;
            int col1=m[i].second.first;
            int row2=m[i].second.second.first;
            int col2=m[i].second.second.second.first;
            int newv=m[i].second.second.second.second;
            if(row>=row1&&col>=col1&&row<=row2&&col<=col2){
                return newv;
            }


        }
        return rectangle[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */