class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int>ans;
        int a=n;
       
        long long int place=1;
        while(a){
            int b=a%10;
            if(b){
            ans.push_back(b*place);
            }
            place*=10;
            a/=10;
           
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};