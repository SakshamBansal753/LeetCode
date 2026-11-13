class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int e1=INT_MIN,e2=INT_MIN,cnt1=0,cnt2=0;
            for(int i=0;i<nums.size();i++){
                if(cnt1==0&&nums[i]!=e2){
                    cnt1=1;
                    e1=nums[i];
                }else if(cnt2==0&&nums[i]!=e1){
                    cnt2=1;
                    e2=nums[i];
                }else if(e1==nums[i])cnt1++;
                else if(e2==nums[i])cnt2++;
                else{ cnt1--;cnt2--;}

            }cnt1=0;
            cnt2=0;
            vector<int> res;
        int n = nums.size();
         for (int i = 0; i < n; i++) {
            if (nums[i] == e1) {
                cnt1++; 
            }
            if (nums[i] == e2) {  
                cnt2++;
            }
        }

        if (cnt1 > n / 3) res.push_back(e1);
        if (cnt2 > n / 3) res.push_back(e2);

        return res;
    }
};