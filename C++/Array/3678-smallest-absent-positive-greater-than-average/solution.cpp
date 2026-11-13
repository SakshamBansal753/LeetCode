class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int s=0;
        for(int val:nums){
            s+=val;
        }
        double avg=double(s)/nums.size();
        int count = 1;
        while (true) {
            if (count > avg && find(nums.begin(), nums.end(), count) == nums.end()) {
                return count;
            }
            count++;
        }
        return count;
    }
};