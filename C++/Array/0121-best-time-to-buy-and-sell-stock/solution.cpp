class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=INT_MIN;
        int bestbuy=prices[0];
        for(int price:prices){
            bestbuy=min(price,bestbuy);
            ans=max(ans,price-bestbuy);
        }
        return ans;
    }
};