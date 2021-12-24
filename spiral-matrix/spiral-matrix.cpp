class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& A) {
        
          int t=0,l=0,r=A[0].size()-1,b=A.size()-1;
    int dir=0;
    vector<int>bb;
    while(t<=b and r>=l)
    {
     
        if(dir==0){
            for(int k=l;k<=r;k++)bb.push_back(A[t][k]);
            t++;dir++;
        }
       else if(dir==1){
            for(int k=t;k<=b;k++)bb.push_back(A[k][r]);
            r--;dir++;
        }
         else if(dir==2){
         // if(l==r and A[0].size()%2==0)break;
            for(int k=r;k>=l;k--)bb.push_back(A[b][k]);
          b--;dir++;
        }
       else if(dir==3)
        { 
          for(int k=b;k>=t;k--)bb.push_back(A[k][l]);
          l++;
            dir++;
        }
      dir = dir%4;
        
    }
   
    return bb;
    }
};