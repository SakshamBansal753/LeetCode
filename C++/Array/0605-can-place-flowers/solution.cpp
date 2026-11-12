class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==0){
                int prev=0;
                if(i==0){
                     prev=0;
                }else{
                   prev =flowerbed[i-1];
                }
                int right=0;
                if(i==flowerbed.size()-1){
                    right=0;
                }else{
                    right=flowerbed[i+1];
                }
                if(!prev&&!right){
                    flowerbed[i]=1;
                    n--;
                }
            }
            if(n<=0){
                return true;
            }
        }
        return false;
           
    }
};