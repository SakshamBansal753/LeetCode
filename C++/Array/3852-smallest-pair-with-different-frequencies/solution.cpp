class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int num:nums){
            m[num]++;
        }
        vector<int>ans(2,-1);
        vector<int>val;
        for(auto y:m){
            val.push_back(y.first);
        }
        if(val.size()<2){
            return ans;
        }
        sort(val.begin(),val.end());
       
        int n=val.size();
     for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
             if(m[val[i]]!=m[val[j]]){
                 return{val[i],val[j]};
             }
         }
     }
        return ans;
            
    }
};