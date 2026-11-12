class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>seen(nums1.begin(),nums1.end());
        unordered_set<int>seen2(nums2.begin(),nums2.end());
        vector<int>ans;
        for(auto k:seen2){
            if(seen.find(k)!=seen.end()) ans.push_back(k);
        }
        return ans;
    }
};