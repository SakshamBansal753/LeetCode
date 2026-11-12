class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        vector<int> count; // Stores the actual string indices of every '1'
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                count.push_back(i);
            }
        }
        
        // Edge case: Not enough 1s in the entire string
        if (count.size() < k) {
            return "";
        }
        
        int size = INT_MAX;
        string ans = "{"; // High ASCII dummy value
        
        // Loop through our list of 1s in chunks of size k
        for (int i = 0; i <= count.size() - k; i++) {
            
            // Calculate exact string length between the i-th '1' and the (i+k-1)-th '1'
            int len = count[i + k - 1] - count[i] + 1;
            
            if (len < size) {
                size = len;
                // Extract using the actual string index 'count[i]'
                ans = s.substr(count[i], len); 
            } 
            else if (len == size) {
                // Ensure we don't accidentally overwrite 'ans' here!
                string curr = s.substr(count[i], len);
                if (curr < ans) {
                    ans = curr;
                }
            }
        }
        
        return ans;
    }
};