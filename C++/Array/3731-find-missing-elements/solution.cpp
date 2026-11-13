class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=nums[0];
        
        int n=nums.size();
        int r=nums[n-1];int k=1;
        vector<int>ans;
        while(k<n){
            if(nums[k]!=l+1){
                ans.push_back(l+1);

            }else{
                k++;
            }
            l++;
        }

        return ans;
    }
};