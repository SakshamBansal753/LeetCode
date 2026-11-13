class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int maxi =*max_element(nums.begin(),nums.end());
        int idx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==maxi){
                idx=i;
                break;
            }
        }
        long long lsum=0;
        long long rsum=0;
        for(int i=0;i<=idx;i++){
            lsum+=nums[i];
        }
        for(int r=idx;r<nums.size();r++){
            rsum+=nums[r];
            if(rsum>lsum){
                return 1;
            }
        }
        return lsum>rsum? 0: ((rsum>lsum) ? 1:-1);
    }
};