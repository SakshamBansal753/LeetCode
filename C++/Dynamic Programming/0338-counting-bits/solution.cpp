class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        ans.push_back(0);
        for(int i=1;i<=n;i++){
            int x=i;
            int sum=0;
            while(x){
                sum+=x%2;
                x/=2;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};