class Solution {
public:
    int minimumRecolors(string blocks, int k) {
               int n = blocks.size();
        int whiteCount = 0, minOperations = k;

        stack<int> s; 

        
        for (int i = 0; i < k; i++) {
            if (blocks[i] == 'W') {
                whiteCount++;
                s.push(i);
            }
        }
        minOperations = whiteCount;

    
        for (int i = k; i < n; i++) {
            if (blocks[i - k] == 'W') {
                whiteCount--;
                s.pop();
            }

            if (blocks[i] == 'W') {
                whiteCount++;
                s.push(i);
            }

            minOperations = min(minOperations, whiteCount);
        }

        return minOperations;
    
    }
};
