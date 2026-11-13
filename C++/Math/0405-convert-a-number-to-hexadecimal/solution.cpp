class Solution {
public:
    string toHex(int num) {
              unordered_map<int, char> m = {
            {0, '0'}, {1, '1'}, {2, '2'}, {3, '3'}, {4, '4'},
            {5, '5'}, {6, '6'}, {7, '7'}, {8, '8'}, {9, '9'},
            {10, 'a'}, {11, 'b'}, {12, 'c'}, {13, 'd'},
            {14, 'e'}, {15, 'f'}
        };

         unsigned int k = num;
        string s="";
        if(num==0) return "0";
        while(k){
           s += m[k % 16];
            k=k/16;
        }
       reverse(s.begin(),s.end());
       return s;
    }
};