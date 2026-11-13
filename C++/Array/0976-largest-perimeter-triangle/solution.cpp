class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
       int n=nums.size(),area=0;
       if(n<3) return 0;
        sort(nums.begin(),nums.end());
        
        int i=0,j=1,k=2;
        while(k<n){
            if(nums[i]+nums[j]>nums[k]){
                area=max(area,nums[i]+nums[j]+nums[k]);

            }
            i++;
            j++;
            k++;
        }
        return area;
    }
};