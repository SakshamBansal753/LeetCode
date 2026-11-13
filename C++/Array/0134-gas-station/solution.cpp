class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_sum=0;
        int total_cost=0;
        for(int val :gas){
            total_sum+=val;
            
        }
        for(int val :cost){
            total_cost+=val;

        }
        if(total_sum<total_cost){
            return -1;
        }
        int start=0;int currentgas=0;
        for(int i=0;i<gas.size();i++){
            currentgas+=(gas[i]-cost[i]);
            if(currentgas<0){
                currentgas=0;
                start=i+1;
            }
        }
        return start;
    }
};