class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
      int n =   grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m));
        for(int i = 0;i<m;i++)
            dp[0][i] = grid[0][i];
        for(int i = 1;i<n;i++)
        {
            for(int j = 0 ;j<m;j++)
            {
                if(j==m-1){
                    dp[i][j] = grid[i][j]+ min(dp[i-1][j],dp[i-1][j-1]);
                }
                else if(j==0)
                    dp[i][j] = grid[i][j] +min(dp[i-1][j] , dp[i-1][j+1]);
   else dp[i][j] = min({dp[i-1][j],dp[i-1][j+1],dp[i-1][j-1]})+grid[i][j];
            }
        }
  
        for(int i = 0;i<m;i++)
  {
          //  cout<<dp[n-1][i]<<" ";
      dp[n-1][0] =min(dp[n-1][0],dp[n-1][i]);
  }
        return dp[n-1][0];
    }
};