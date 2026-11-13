class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            // Calculate sum without carry
            int sum = a ^ b;
            // Calculate the carry, and shift it left by 1
            int carry = (a & b) << 1;
            // Update a and b for the next iteration
            a = sum;
            b = carry;
        }
        return a;
    }
};
