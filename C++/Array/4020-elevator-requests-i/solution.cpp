class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int ans=0;
        int curr=0;
        for(int request:requests){
            ans+=abs(request-curr);
            curr=request;
        }
        return ans;
    }
};