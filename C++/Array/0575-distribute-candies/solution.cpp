class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        sort(candyType.begin(),candyType.end());
        int n=candyType.size()/2;
        int x=1;
        for(int i=0;i<candyType.size()-1;i++){
            if(candyType[i]!=candyType[i+1]){
                x++;
            }
        }
        if(n==x||n<x){
            return n;
        }return x;

    }
};