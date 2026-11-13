class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int,int>>q;
        int n=tickets.size();
        for(int i=0;i<n;i++){
            q.push({tickets[i],i});
        }
        int t=0;
        while(!q.empty()){
            t++;
            int m=q.front().second;
            int val=q.front().first;
            q.pop();
            if(val-1==0){
                if(m!=k) continue;
                if(m==k) return t;

            }
            q.push({val-1,m});
        }
        return t;
    }
};