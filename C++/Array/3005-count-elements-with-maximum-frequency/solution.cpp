class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int ans=0;
        int max=0;
        for(auto [key,value]:m){
            if(value>max){
                max=value;
                ans=value;
            }else if(value==max){
                ans+=value;
            }
        }
        return ans;
    }
};