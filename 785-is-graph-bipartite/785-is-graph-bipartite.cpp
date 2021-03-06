class Solution {
public:
    vector<int> color;
    vector<int> visited;
   bool dfs(int source,int c , vector<vector<int>> v)
   {
       visited[source] = true; 
       color[source] = c;
       for(auto child: v[source])
       {
           if(!visited[child])
           {
               if(dfs(child,c^1,v)==false)
                   return false;
           }
           else if(color[child]==color[source])
               return false;
       }
       return true;
   }
    bool bfs(int source,int c, vector<vector<int>> v)
    {
        queue<int> q;
        q.push(source);
        visited[source] = true;
        while(q.size())
        {
            auto cur = q.front();
            q.pop();
            visited[cur] = true;
            for(auto child: v[cur])
            {
                if(!visited[child])
                    
                {
                  q.push(child);
                    color[child] = color[cur]^1;
                }
                if(color[child] == color[cur])
                    return false;
            }
            
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        visited.resize(graph.size()+1);
        color.resize(graph.size()+1);
      for(int i = 0 ;i<graph.size();i++)
          if(!visited[i])
              if(!bfs(i,0,graph))return false;
        
        return true;
       
    }
};