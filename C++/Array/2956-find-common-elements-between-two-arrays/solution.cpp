class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> s1;
        unordered_set<int> s2;

        for(auto x : nums1){
            s1.insert(x);
        }

        for(auto x : nums2){
            s2.insert(x);
        }

        vector<int> ans(2,0);

        for(auto x : nums1){
            ans[0] += s2.count(x);
        }

        for(auto x : nums2){
            ans[1] += s1.count(x);
        }

        return ans;
    }
};