class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>());
     int amnt=0;
  int l=0,r=1;
   for(int i = 0; i < cost.size(); i++){
            if((i + 1) % 3 != 0){
                amnt += cost[i];
            }
        }

     return amnt;
    }
};