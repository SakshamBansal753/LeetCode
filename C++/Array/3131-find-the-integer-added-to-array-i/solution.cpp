class Solution {
public:
    int max_fn(vector<int>&s){
        int j=INT_MIN;
        for(int n:s){
            j=max(j,n);
        }
        return j;
    }
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        return max_fn(nums2)-max_fn(nums1);
    }
};