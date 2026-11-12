class Solution {
public:
    int maximumUnits(vector<vector<int>>& box, int truck) {
        sort(box.begin(),box.end(),[](vector<int>&a,vector<int>&b){
            return a[1]>b[1];
        });
        int profit=0;
        int l=0;
    
        while(l<box.size()&&truck>0){
             int take = min(truck, box[l][0]);
            profit += take * box[l][1];
            truck -= take;
            l++;
        }
        return profit;
    }
};