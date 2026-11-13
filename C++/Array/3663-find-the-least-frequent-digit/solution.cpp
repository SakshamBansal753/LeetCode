class Solution {
public:
    int getLeastFrequentDigit(int n) {
        map<int,int>m;
        int a=n;
        
        while(a){
            m[a%10]++;
            a/=10;
        }
              int ans = -1;
        int minFreq = INT_MAX;

        for (auto &p : m) {
            if (p.second < minFreq) {
                minFreq = p.second;
                ans = p.first;  
            }
        }

        return ans;

    }
};