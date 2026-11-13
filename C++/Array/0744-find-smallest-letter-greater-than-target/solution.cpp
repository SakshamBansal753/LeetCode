class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int str=0,end=letters.size()-1;
        int mid;
        while(str<=end){
            mid=str+(end-str)/2;
            
             if(target<letters[mid]){
                end=mid-1;
            } else{
              str=mid+1;
            }
        }
   return letters[str%letters.size()];
    }
};