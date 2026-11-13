class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
            vector<int>visited(n,0);
            queue<int>q;
           
            q.push(start);
            while(!q.empty()){
                int i=q.front();
                q.pop();
                
                if(i>=n||i<0||visited[i]) continue;
                if(arr[i]==0) return true;
                visited[i]=1;
                q.push(i+arr[i]);
                q.push(i-arr[i]);
            }
            return false;
    }
};