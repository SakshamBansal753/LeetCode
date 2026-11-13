class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int st=0,end=nums.size()-1;
        int l_neg=-1,count_neg=0,f_pos=nums.size(),count_pos=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]<0){
                l_neg=mid;
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        st=0;
        end=nums.size()-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]>0){
                f_pos=mid;
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
       count_neg=l_neg+1;
        count_pos=nums.size()-f_pos;
        return max(count_neg,count_pos);
    
    }
};