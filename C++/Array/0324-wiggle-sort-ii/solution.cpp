class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int>ans=nums;
        int n=nums.size();
        if(n==0) return ;
        sort(ans.begin(),ans.end());
        int high=n-1;
        int mid=(n-1)/2;
        for(int i=0;i<n;i++){
            if(i%2==0){
                nums[i]=ans[mid--];
            }else{
                nums[i]=ans[high--];
            }
        }
    
    }
};