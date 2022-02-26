class Solution {
public:
    vector<vector<bool>> visit;
    void dfs(int x , int y , vector<vector<char>> &grid)
    {
        
        if(x<0 or y<0 or x>grid.size()-1 or y > grid[0].size()-1 or grid[x][y] == '0')return ;
        grid[x][y] ='0';
        dfs(x-1,y,grid);
        dfs(x,y-1,grid);
        dfs(x+1,y,grid);
        dfs(x,y+1,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        //DFS implementation 
        visit.resize(grid.size(),vector<bool>(grid[0].size()));
        
        int cnt = 0;
        for(int i = 0 ;i<grid.size();i++)
            for(int j = 0 ;j<grid[0].size();j++)
            {
                if( grid[i][j] == '1')
                  {  
                    dfs(i,j,grid);
                    cnt++;
                }
            }
        return cnt;
    }
};