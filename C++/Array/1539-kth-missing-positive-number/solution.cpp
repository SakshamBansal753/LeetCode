class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l=1,r=0,cnt=0;
        int n=arr.size();
        while(r<n && cnt<k){
            if(l==arr[r]){
                r++;
                l++;
            }else{
                l++;
                cnt++;
            }
        }
        if (cnt<k){
            return l+(k - cnt) - 1;
        }else{
            return l-1;
        }
    }
};