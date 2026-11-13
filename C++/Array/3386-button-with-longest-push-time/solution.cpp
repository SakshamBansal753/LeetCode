class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int i1=events[0][0];
        int max=events[0][1];
        for(int i=1;i<events.size();i++){
           int duration=events[i][1]-events[i-1][1];
           int x=events[i][0];
           if(duration>max){
            max=duration;
            i1=x;
           }else if(duration==max){
            i1=min(i1,events[i][0]);
           }
        }
        return i1;
    }
};