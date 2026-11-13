class Solution {
public:
    int minimumSum(int num) {
        int digit = 0;
        vector<int> arr;
        while(num != 0){
            digit = num%10;
            arr.push_back(digit);
            num = num/10;
        }
        sort(arr.begin(),arr.end());

        int j = arr.size()-1;

        int num1 = 10*arr[0] + arr[j];
        int num2 = 10*arr[1] + arr[j-1];

        return num1+num2;
    }
};