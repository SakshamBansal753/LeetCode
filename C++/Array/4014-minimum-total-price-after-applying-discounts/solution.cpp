class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        double ans = 0.0;
        sort(prices.begin(),prices.end(),greater<>());
        sort(discounts.begin(),discounts.end(),greater<>());
        int n = prices.size();
        int m = discounts.size();
        int j=0;
        int i=0;
       
        while(i<n&&j<m){
            ans+=(double)(prices[i]*(100-discounts[i]))/100;
            i++;
            j++;
        }
        while(i<n){
            ans+=prices[i++];
        }
        return ans;
    }
};