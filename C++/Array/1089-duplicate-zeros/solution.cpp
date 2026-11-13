class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>num;
        for(int ele :arr){
            if(ele==0){
                num.push_back(ele);
            }
            num.push_back(ele);
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=num[i];
        }
        

    }
};