class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
   bool x=1,y=1;
        for(int i = 0;i<matrix[0].size();i++)
            if(matrix[0][i]==0)x = false;
        
        for(int i = 0;i<matrix.size();i++)
            if(matrix[i][0]==0)y=false;
        
    for(int i = 0 ;i<matrix.size();i++)
    {
        for(int j = 0;j<matrix[i].size();j++)
        {
            if(matrix[i][j]==0)matrix[0][j]=0,matrix[i][0]=0;
        }
    }
    
     
  for(int i = 1;i<matrix.size();i++)
      for(int j = 1;j<matrix[0].size();j++)
          if(matrix[i][0]==0 or matrix[0][j]==0)
              matrix[i][j]=0;
        
        if(!x)
        {
            for(int i = 0;i<matrix[0].size();i++)
                matrix[0][i]=0;
        }
        if(!y)
            for(int i =0;i<matrix.size();i++)
                matrix[i][0]=0;
        
        
        
    }
};