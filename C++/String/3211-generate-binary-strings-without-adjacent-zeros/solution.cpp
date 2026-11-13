class Solution {
private:
    void solve(vector<string>& ans, int n, string temp) {
        if (temp.size() == n) {
            ans.push_back(temp);
            return;
        }

        if (temp.empty() || temp.back() != '0')
            solve(ans, n, temp + "0");

        solve(ans, n, temp + "1");
    }

public:
    vector<string> validStrings(int n) {
        vector<string> ans;
        solve(ans, n, "");
        return ans;
    }
};