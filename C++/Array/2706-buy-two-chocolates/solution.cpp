class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int j=money;
        money-=prices[0]+prices[1];
        return money<0?j:money;
    }
};