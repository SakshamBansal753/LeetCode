class Solution {
public:
    int maxScore(vector<int>& cards, int k) {
        int leftsum=0;
        int n=cards.size();
        for(int i=0;i<k;i++)
            leftsum+=cards[i];
        int r=n-1;
        int rightsum=0;
        int ms=leftsum;
        for(int i=k-1;i>=0;i--){
            leftsum-=cards[i];
            rightsum+=cards[r];
            r--;
            ms=max(ms,leftsum+rightsum);
        }
        return ms;
    }
};