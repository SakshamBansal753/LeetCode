class Solution {
public:

    int longestMonotonicSubarray(vector<int>& arr){
        int n = arr.size();
        if (n == 0)
            return 0;
        int curr = 1;
        int ans1 = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] > arr[i - 1]) {
                curr++;
            } else {
                curr = 1;
            }
            ans1 = max(ans1, curr);
        }
        curr = 1;
        int ans2 = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1]) {
                curr++;
            } else {
                curr = 1;
            }
            ans2 = max(ans2, curr);
        }
        return max(ans1,ans2);

    }
};