class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median;
        vector<int>ans;
       int i=0;int j=0;
          while (i < nums1.size()) {
        ans.push_back(nums1[i++]);
    }
    while (j < nums2.size()) {
        ans.push_back(nums2[j++]);

    }
    sort(ans.begin(),ans.end());
    int n=ans.size();
    if(n%2==0){
        median=(ans[n/2-1]+ans[n/2])/2.0;
        return median;
    }else{
        median=ans[n/2];
        return median;
    }

    }
};