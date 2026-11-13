class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
             int dist = 0;
        while(mainTank >= 5 && additionalTank > 0)
        {
            dist += 50;
            mainTank -= 5;
            --additionalTank;
            mainTank += 1;
        }
        dist += mainTank*10;
        return dist;
    }
};