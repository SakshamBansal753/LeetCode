class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        set<int>s;
        for(int i=0;i<nums.size();i++){
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int target=k+nums[i];
            int lb=lower_bound(nums.begin()+i+1,nums.end(),target)-nums.begin();
            if(lb<nums.size()&&nums[lb]==target){
                cnt++;
             }            
                        
        }
        return cnt;
    }
};