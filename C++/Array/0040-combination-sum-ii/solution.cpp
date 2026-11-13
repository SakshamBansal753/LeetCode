class Solution {
public:
    void findcomb(int ind,vector<int> &arr,int tar,vector<vector<int>>&ans, vector<int> & ds){
        if(tar==0){
            ans.push_back(ds);
            return;
        }for(int i=ind;i<arr.size();i++){
            if(i>ind&&arr[i]==arr[i-1]) continue;
            if(arr[i]>tar) break;
            ds.push_back(arr[i]);
            findcomb(i+1,arr,tar-arr[i],ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        findcomb(0,candidates,target,ans,ds);
        return ans;
    }
};