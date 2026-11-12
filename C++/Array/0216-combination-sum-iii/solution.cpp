class Solution {
public:
 int nums[9]={1,2,3,4,5,6,7,8,9};
    void backtc(int idx,int k,int n,int sum,vector<int>&val,vector<vector<int>>&ans){
        if(val.size()==k){
            if(sum==n){
                ans.push_back(val);
                return;
            }
        }
        for(int i=idx;i<9;i++){
            if(sum+nums[i]>n) break;
            val.push_back(nums[i]);
            backtc(i+1,k,n,sum+nums[i],val,ans);
            val.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>val;
        backtc(0,k,n,0,val,ans);
        return ans;
    }
};