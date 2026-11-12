
class Solution {
public:
    string removeDuplicates(string s, int k) {
        string result = "";
        stack<pair<int, char>> st;

        for (char c : s) {
            if (st.empty() || st.top().second != c) {
                st.push({1, c});
            } else {
                st.top().first++;

                if (st.top().first == k) {
                    st.pop();
                }
            }
        }

        while (!st.empty()) {
            result = string(st.top().first, st.top().second) + result;
            st.pop();
        }

        return result;
    }
};
