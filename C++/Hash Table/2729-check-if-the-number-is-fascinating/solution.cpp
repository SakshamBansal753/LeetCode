class Solution {
public:
    bool isFascinating(int n) {
        // int k=n;
       
        // vector<int>ans;
        // while(k){
        //     ans.push_back(k%10);
        //     k/=10;
        // }
        // k=2*n;
        //   while(k){
        //     ans.push_back(k%10);
        //     k/=10;
        // }
        // k=3*n;
        //   while(k){
        //     ans.push_back(k%10);
        //     k/=10;
        // }
        // for(int )

        string k=to_string(n);
        string j=to_string(2*n);
        string m=to_string(3*n);
        string y=k+j+m;
        
        unordered_map<char,int>fre;
        for(char c:y){
            if(c=='0'){
                return false;
            }
           fre[c]++;
        }
        for(char c:y){
            if(fre[c]!=1) return false;
        }
        return true;
    }
};