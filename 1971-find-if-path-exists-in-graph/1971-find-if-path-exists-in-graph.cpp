class Solution {
public:
   
     vector<vector<int>> edge;
    vector<bool> visited;
    void dfs(int node)
    {
        visited[node] = true; 
        for(auto c:edge[node])
        {
            if(!visited[c])
                dfs(c);
        }
        
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        visited.resize(n+1,0);
    edge.resize(n+1);
        for(auto c: edges)
        {
            edge[c[0]].push_back(c[1]);
            edge[c[1]].push_back(c[0]);
        }
        dfs(source);
        return visited[destination];
    }
};