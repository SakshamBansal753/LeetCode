class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>prime={2,3,5};
        int id1=0,id2=0,id3=0;
        vector<int>nl(1690,1);
        for(int i=1;i<n;i++){
            nl[i]=min({nl[id1]*2,nl[id2]*3,nl[id3]*5});
        if (nl[i] == nl[id1] * 2) id1++;
        if (nl[i] == nl[id2] * 3) id2++;
        if (nl[i] == nl[id3] * 5) id3++;
        }
        return nl[n-1];
    }
};