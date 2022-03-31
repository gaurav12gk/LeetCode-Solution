class Solution {
public:
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    bool isValid(int x, int y , int n , int m)
    {
        if(x<0 or y<0 or x>n-1 or y> m-1)return false; 
        return true;
    }
    void bfs(int x , int y , vector<vector<char>> &grid)
    {
       // cout<<"Helo";
        grid[x][y] = '0';
        queue<pair<int,int>> q;
        q.push({x,y});
        while(q.size())
        {
            auto cur = q.front(); 
            q.pop();
          
            for(int i =  0 ;i<4;i++)
            {
                int newx = cur.first+dx[i];
                int newy = cur.second + dy[i];
                if(isValid(newx,newy,grid.size(),grid[0].size()) and grid[newx][newy]=='1')
                    q.push({newx,newy}),  grid[newx][newy] = '0';
                
            }
        }
       
    }
    int numIslands(vector<vector<char>>& grid) {
        //DFS implementation 
       
        int cnt = 0;
        for(int i = 0 ;i<grid.size();i++)
            for(int j = 0 ;j<grid[0].size();j++)
            {
                if( grid[i][j] == '1')
                  {  bfs(i,j,grid),cnt++;}
            }
        return cnt;
    }
};