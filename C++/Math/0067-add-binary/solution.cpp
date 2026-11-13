class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string result = "";

        // Perform binary addition until both strings are exhausted
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;  // Start with carry from the previous addition

            if (i >= 0) {
                sum += a[i] - '0';  // Add the bit from a
                i--;
            }

            if (j >= 0) {
                sum += b[j] - '0';  // Add the bit from b
                j--;
            }

            carry = sum / 2;  // Calculate new carry (1 or 0)
            result += to_string(sum % 2);  // Append the current bit (0 or 1)
        }

        reverse(result.begin(), result.end());  // Reverse the result to get the correct order
        return result;
    }
};