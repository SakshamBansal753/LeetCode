typedef long long ll;
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        ll ans =0;
        sort(nums.begin(), nums.end(), [](ll a, ll b) {
            return abs(a)<abs(b);
        });
        for(int i =0;i<n;i++){
            if(i<n/2){
                ans-=(nums[i]*nums[i]);
            }else{
                ans+=(nums[i]*nums[i]);
            }
        }
        return ans;
    }
};