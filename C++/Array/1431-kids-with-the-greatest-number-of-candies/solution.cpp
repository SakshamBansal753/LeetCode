class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool>ans(n,false);
        int ma=INT_MIN;
        for(int cd:candies){
            ma=max(ma,cd);
        }
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=ma){
                ans[i]=true;
            }
        }
        return ans;
    }
};