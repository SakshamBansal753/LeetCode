class Solution {
public:
    int gcd(int a,int b ){
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefixGcd(n);
        int  mx=nums[0];
        for(int i=0;i<n;i++){
            mx=max(mx,nums[i]);
            prefixGcd[i]=gcd(nums[i],mx);
            
            
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        int l=0,r=n-1;
        long long ans=0;
        while(l<r){
            ans+=gcd(prefixGcd[l],prefixGcd[r]);
            l++;
            r--;
        }
        return ans;
        
    }
};