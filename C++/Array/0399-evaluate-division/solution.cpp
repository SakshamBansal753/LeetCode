class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        

        unordered_map<string, unordered_map<string, double>> graph;
        for(int i = 0; i < equations.size(); i++)
        {
            string u = equations[i][0];
            string v = equations[i][1];
            graph[u][v] = values[i];
            graph[v][u] = 1.0 / values[i];
        }
        
  
        vector<double> result;
        for(int i = 0; i < queries.size(); i++)
        {
            string src = queries[i][0];
            string dst = queries[i][1];
            
            if(graph.find(src) == graph.end() || graph.find(dst) == graph.end()) {
                result.push_back(-1.0);
            }
            else
            {
                unordered_set<string> visited;
                double ans = -1.0;
                dfs(src, dst, graph, visited, 1.0, ans);
                result.push_back(ans);
            }
        }
        return result;
    }

    void dfs(string node, string dst, unordered_map<string, unordered_map<string, double>> &graph, unordered_set<string> &visited, double cur_prod, double &ans)
    {
        if(node == dst) 
        {
            ans = cur_prod; 
            return;
        }
        
        visited.insert(node);
        
        for(auto & neighbor : graph[node])
        {
            if(visited.find(neighbor.first) == visited.end())
            {
                dfs(neighbor.first, dst, graph, visited, cur_prod * neighbor.second, ans);
            }
        }
    }
};