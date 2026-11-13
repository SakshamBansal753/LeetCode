class Solution {
public:
    void dfs(vector<vector<int>>&graph,vector<vector<int>>&res,vector<int>path,int node){
        if(node==graph.size()-1){ res.push_back(path);
        return;}
       
        for(int v:graph[node]){
            path.push_back(v);
            dfs(graph,res,path,v);
            path.pop_back();
        }
        return ;
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
       
        vector<vector<int>>res;
        vector<int>path;
        path.push_back(0);
        dfs(graph,res,path,0);
        return res;
    }
};