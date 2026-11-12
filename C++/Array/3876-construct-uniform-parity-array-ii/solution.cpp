class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool odd=false;
        int v=nums1[0];
        for(int num:nums1){
            if(num<v){
                v=num;
            }
            if(num&1){
                odd=true;
            }
        }
        if(v&1){
            return true;
        }
        return !odd;
    }
};