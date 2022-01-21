class Solution {
public:
    vector<vector<int>> paths;
    void dfs(int node , vector<int> path , int destination , vector<vector<int>> v)
    {
        if(node == destination){
            paths.push_back(path);
            return;
        }
        for(auto child : v[node])
        {
            path.push_back(child);
            dfs(child,path,destination,v);
              path.pop_back();
        }
      
        
        
        
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int destination = graph.size()-1;
        vector<int> path;
        path.push_back(0);
        dfs(0,path,destination,graph);
        return paths;
    }
};