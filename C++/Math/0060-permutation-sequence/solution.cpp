class Solution {
public:
    string getPermutation(int n, int k) {
        int fac=1;
        string ans="";
        vector<int>number;
        for(int i=1;i<n;i++){
            fac*=i;
            number.push_back(i);
        }
        number.push_back(n);
        int m=number.size();
        k=k-1;
        while(true){
            ans+=to_string(number[k/fac]);
            number.erase(number.begin()+k/fac);
            if(number.size()==0){
                break;
            }
            k%=fac;
            fac/=number.size();
        }
        return ans;
    }
};