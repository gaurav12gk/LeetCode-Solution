class Solution {
public:
    void dfs(vector<vector<char>> &grid,int x ,int y)
    {
    if(x>grid.size()-1 or y>grid[0].size()-1 or x<0 or y<0 or grid[x][y]=='0')return;
    
        grid[x][y] = '0';
        dfs(grid,x-1,y);
        dfs(grid,x+1,y);
        dfs(grid,x,y+1);
        dfs(grid,x,y-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m =grid[0].size();
        int cnt = 0 ; 
        for(int i = 0;i<n;i++)
            for(int j = 0 ;j<m;j++)
            {
            if(grid[i][j]=='1')
            {
                dfs(grid,i,j);
                cnt++;
            }
            }
        return cnt;
    }
};