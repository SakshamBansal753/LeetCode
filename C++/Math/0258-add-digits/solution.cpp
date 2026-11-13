class Solution {
public:
    int addDigits(int num) {
        if (num == 0) return 0;  // Handle the case where num is 0
        if (num % 9 == 0) return 9;  // If num is divisible by 9, the result is 9
        return num % 9;  // Otherwise, return the remainder when divided by 9
    }
};
