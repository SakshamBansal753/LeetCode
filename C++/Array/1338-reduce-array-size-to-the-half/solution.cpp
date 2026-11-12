class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> mp;
        for (int x : arr) mp[x]++;
        
        vector<int> freq;
        for (auto [key, value] : mp) freq.push_back(value);
        sort(freq.begin(), freq.end());
        
        int ans = 0;
        int removed = 0;
        int half = n / 2;
        int i = freq.size() - 1;
        while (removed < half) {
            ans += 1;
            removed += freq[i--];
        }
        return ans;
    }
};