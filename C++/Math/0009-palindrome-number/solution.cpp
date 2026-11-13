class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers ending with 0 but not 0 itself can't be palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        
        int reversed = 0;
        while (x > reversed) {
            reversed = reversed * 10 + x % 10;  // Add the last digit to reversed
            x /= 10;  // Remove the last digit from x
        }
        
        // If x is equal to reversed, it means the number has even digits
        // If x is equal to reversed / 10, it means the number has odd digits
        return x == reversed || x == reversed / 10;
    }
};
