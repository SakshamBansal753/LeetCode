class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
       int n=nums.size();
       int k=queries.size();
      
       unordered_map<int,vector<int>>mp;
       for(int i=0;i<n;i++){
        mp[nums[i]].push_back(i);
       }
       vector<int>ans;

       for(int i=0;i<k;i++){
        vector<int>&a=mp[nums[queries[i]]];
        if(a.size()<=1){
            ans.push_back(-1);
            
        }else{
            int idx=queries[i];
            int lower=lower_bound(a.begin(),a.end(),idx)-a.begin();
            int left=a[(lower-1+a.size())%a.size()];
            int right=a[(lower+1)%a.size()];
            int res=INT_MAX;
            res=min(res,min(abs(idx-left),n-abs(idx-left)));
            res=min(res,min(abs(idx-right),n-abs(idx-right)));
            ans.push_back(res);
        }
       }
       return ans;
    }
};