class Solution {
public:
    int getLucky(string s, int k) {

        long long
         value = 0;
        for (char c : s) {
            int position= (c - 'a' + 1);  
             while (position > 0) {
                value+= position % 10;
                position /= 10;
            }
        }

        
        for (int i = 1; i < k; i++) {
            int sum = 0;

            while (value > 0) {
                sum += value % 10;
                value /= 10;
            }

         
         
            value = sum;
        }

        return value;
    }
};
