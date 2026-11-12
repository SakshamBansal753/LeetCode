class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        
        int maxi=0;
        for(int k=0;k<30;k++){
            int bit=1<<k;
            vector<int>temp;
            
            for(int i=0;i<n;i++){
                if(bit&nums[i]){
                    if(temp.empty()||nums[i]>temp.back()){
                        temp.push_back(nums[i]);
                    }else{
                        int ind=lower_bound(temp.begin(),temp.end(),nums[i])-temp.begin();
                        temp[ind]=nums[i];
                    }
                }
            }
            maxi=max((int)temp.size(),maxi);
        }
        return maxi;
    }
};