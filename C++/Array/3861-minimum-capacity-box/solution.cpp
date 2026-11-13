class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int mn=INT_MAX;
        int n=capacity.size();
        int index=-1;
        for(int i=0;i<n;i++){
            if(capacity[i]>=itemSize&&capacity[i]<mn){
                mn=capacity[i];
                index=i;
            }
        }
        return index;
       
    }
};