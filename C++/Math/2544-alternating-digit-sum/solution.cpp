class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        int index = 0;

        stack<int> digits;

        while (n > 0) {
            digits.push(n % 10);
            n /= 10;
        }

      
        while (!digits.empty()) {
            int digit = digits.top();
            digits.pop();
            if (index % 2 == 0) {
                sum += digit;
            } else {
                sum -= digit;
            }
            index++;
        }

        return sum;

    }
};