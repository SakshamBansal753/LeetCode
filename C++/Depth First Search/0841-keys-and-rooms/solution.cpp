class Solution {
public:
void dfs(vector<vector<int>>&rooms,vector<bool>&visited,int node){
    visited[node]=true;
    for(int room:rooms[node]){
        if(!visited[room]){
            dfs(rooms,visited,room);
        }
    }
}
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>visited(n,false);
        dfs(rooms,visited,0);
        for(bool room:visited){
            if(!room) return false;
        }
        return true;

    }
};