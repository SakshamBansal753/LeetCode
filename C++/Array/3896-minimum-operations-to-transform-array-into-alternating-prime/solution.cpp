class Solution {
public:
    bool isprime(int n){
        if(n<2) return false;
        if(n==2) return true;
        if(n%2==0)return false;
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0) return false;
        }
        return true;
    }
    int next(int n){
         while(!isprime(n)){
             n++;
         }
        return n;
        
    }
    int no(int n){
        if(n<=1) return 1;
        while(isprime(n)){
            n++;
        }
        return n;
    }
    int minOperations(vector<int>& nums) {
        int ops=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                int p=next(nums[i]);
                ops+=p-nums[i];
            }else{
                int p=no(nums[i]);
                ops+=p-nums[i];
            }
                
        }
        return ops;
    }
};