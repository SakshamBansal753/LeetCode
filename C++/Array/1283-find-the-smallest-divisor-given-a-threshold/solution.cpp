class Solution {
public:
    
    int sum_d(vector<int>nums,int div){
        int sum=0;
        if(div==0){
            return 0;
        }
        for(int num:nums){
            sum+=(num+div-1)/div;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        
        int low=1;
        int high=INT_MIN;
        int ans=0;
        for(int num:nums){
            if(num>high){
                high=num;
            }
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            int s=sum_d(nums,mid);
            if(s<=threshold){
                high=mid-1;
                ans=mid;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};