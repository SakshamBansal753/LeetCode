class Solution {
public:
    // Correct primality check function
    bool isPrime(int num) {
        if (num < 2) return false; // 0 and 1 are not prime
        if (num == 2 || num == 3) return true; // 2 and 3 are prime
        if (num % 2 == 0 || num % 3 == 0) return false; // Eliminate multiples of 2 and 3
        
        for (int i = 5; i * i <= num; i += 2) { // Check odd numbers up to sqrt(num)
            if (num % i == 0) return false;
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int>ans(2,0);
        vector<int>Prime;
        int num=left;
        while(num<=right){
        if(isPrime(num)){
            Prime.push_back(num);

        }
        num++;
        }
        if(Prime.size()==0){
            ans={-1,-1};
            return ans;
        }
        int old=INT_MAX;
        int diff;
        for(int i=0;i<Prime.size()-1;i++){
            diff=Prime[i+1]-Prime[i];
            if(diff<old){
                old=diff;
                ans[0]=Prime[i];
                ans[1]=Prime[i+1];
            }
        }
        if(ans[0]==0&&ans[1]==0){
            ans={-1,-1};
            return ans;
        }
        return ans;
    }
};