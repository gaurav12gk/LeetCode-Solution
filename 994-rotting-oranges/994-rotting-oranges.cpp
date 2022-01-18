class Solution {
public:
    const int dirx[4] ={-1,0,1,0};
     const int diry[4]={0,1,0,-1};
    bool isValid(int x,int y , int n, int m)
    {
        if(x<0 or y<0 or x > n-1 or y>m-1)return false; 
        return true;
    }
    int orangesRotting(vector<vector<int>>& grid) {
       int ans =0 ; 
        queue<pair<pair<int,int>,int>> q; 
        
        // node{x,y} , time 
        
        for(int i= 0 ;i<grid.size();i++)
            for(int j = 0 ;j<grid[0].size();j++)
                if(grid[i][j] == 2)
                    q.push({{i,j},0});
        
        while(!q.empty())
        {
            int curx = q.front().first.first;
            int cury = q.front().first.second; 
            int time = q.front().second;
            ans = max(ans,time);
            q.pop();
            
            for(int i = 0 ;i<4;i++)
            {
 if(isValid(curx+dirx[i],cury+diry[i],grid.size(),grid[0].size()) and grid[curx+dirx[i]][cury+diry[i]]==1)
            {
     grid[curx+dirx[i]][cury+diry[i]] = 2;
                q.push({{curx+dirx[i],cury+diry[i]},time+1});
            }
            }
            
        }
           for(int i= 0 ;i<grid.size();i++)
            for(int j = 0 ;j<grid[0].size();j++)
                if(grid[i][j]==1)return -1;
    return ans;
        
    }
};