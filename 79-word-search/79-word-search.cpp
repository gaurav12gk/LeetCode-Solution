class Solution {
public:
    int dx[4]={-1,0,1,0};
     int dy[4]={0,1,0,-1};
    bool dfs(vector<vector<char>> &grid,string word,string curword , int x, int y, int idx)
    {
       if(curword[idx-1]!=word[idx-1])return false;
        if(curword == word)return true;
        if(curword.size()>= word.size())
        return false;
        char value = grid[x][y];
 grid[x][y]='8';
        bool f = false;
        for(int i = 0;i<4;i++)
        {
            int newx = x+dx[i];
            int newy = y+dy[i];
        
  if(newx>=0 and newx<grid.size() and newy>=0 and newy<grid[0].size() and grid[newx][newy]!='8')
              f= f or dfs(grid,word,curword+(grid[newx][newy]),newx,newy,idx+1);
            
        }grid[x][y] = value;
        return f;
    }
    bool exist(vector<vector<char>>& board, string word) {
            vector<vector<bool>> visited;
        visited.resize(board.size(),vector<bool>(board[0].size()));
        
        string r ="";
                 r+=word[0];
        for(int i = 0 ;i<board.size();i++)
            for(int j = 0 ;j<board[0].size();j++)
                if(board[i][j]==word[0])
                  {  if(dfs(board,word,r,i,j,1))return true;}
        
        return false;
    }
};