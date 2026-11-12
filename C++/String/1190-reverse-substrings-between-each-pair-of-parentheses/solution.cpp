class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> openp;
        string result;
        for (char currentChar : s) {
            if (currentChar == '(') {
                openp.push(result.length());
            } else if (currentChar == ')') {
                int start = openp.top();
                openp.pop();
                reverse(result.begin() + start, result.end());
            } else {
                result += currentChar;
            }
        }
        return result;
    }
};