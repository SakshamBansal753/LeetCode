class Solution {
public:
    int minDeletions(string s) {
        int n = s.length();
        vector<int> arr(26, 0);
        for(int i = 0; i<n; i++) arr[s[i] - 'a']++;
        sort(arr.begin(), arr.end(), greater<int>());
        int res = 0;
        int prev = arr[0];
        for(int i = 1; i<26; i++){
            if(prev==0) break;
            if(arr[i]>=prev){
                res+=(arr[i]-prev+1);
                arr[i] = prev-1;
                if(arr[i]!=0) prev = arr[i];
            }else{
                if(arr[i]!=0) prev = arr[i];
                continue;
            }
        }
        return res;
    }
};