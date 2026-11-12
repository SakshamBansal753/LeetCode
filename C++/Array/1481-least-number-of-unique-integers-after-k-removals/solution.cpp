class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> m;

        for (int x : arr) {
            m[x]++;
        }

        vector<int> freq;

        for (auto &[x, f] : m) {
            freq.push_back(f);
        }

        sort(freq.begin(), freq.end());

        int unique = freq.size();

        for (int f : freq) {
            if (k >= f) {
                k -= f;
                unique--;
            } else {
                break;
            }
        }

        return unique;
    }
};