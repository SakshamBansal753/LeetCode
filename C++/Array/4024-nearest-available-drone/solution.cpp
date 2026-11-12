class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int mI=-1, minD=INT_MAX, n=drones.size();
        const int tx=target[0], ty=target[1];
        for(int i=0; i<n; i++){
            const auto& d=drones[i];
            const int x=d[0], y=d[1], r=d[2];
            int dist=abs(x-tx)+abs(y-ty);
            if (dist<=r && dist<minD){
                minD=dist;
                mI=i;
            }
        }
        return mI;
    }
};