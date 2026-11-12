class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        unordered_map<int,int>m;
        m[nums[0]]=1;
        for(int i= 1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                m[nums[i]]++;
            }
        }
        for(auto &p:m){
            if(p.second==1){
                count++;
            }
        }
        return count;
    }
};