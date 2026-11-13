class Solution {
public:
bool search(vector<int>& arr,int target,int start){
    int left=start, right=arr.size()-1;
    int mid;
    while(left<=right){
        mid=left+(right-left)/2;
        if(arr[mid]==target){
            return true;
        }
        if(arr[mid]>target){
            right=mid-1;
        }
        if(arr[mid]<target){
            left=mid+1;
        }
    }
    return false;
}
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        
        int product;
         for(int i=0;i<arr.size();i++){
            product=2*arr[i];
            if(search(arr,product,i+1)){
                return true;
            }
            if (arr[i] % 2 == 0) {
            product = arr[i] / 2;
            if (search(arr, product, i + 1)) {
                return true;
            }
        }
         }
         return false;
 
    }
};