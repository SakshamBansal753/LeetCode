class Solution {
public:
bool is_ok(int k){
    int m=k;
     while(k){
        
                int j=k%10;
                if(j==0){
                    return false;
                }
                if(m%j!=0){
                    return false;
                }
                k=k/10;
            }
            return true;
}
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            int k=i;
             
             if(is_ok(k)){
            ans.push_back(i);}

        }
        return ans;
    }
};