class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        vector<int> pre(seats.size(),-1);
        vector<int> suff(seats.size(),-1);
            int lastOneleft = -1;

        
        for(int i = 0 ;i<seats.size();i++)
        {
        if(seats[i]==1){
            lastOneleft = i;
        }
            else pre[i] = lastOneleft;
        }
        int n = seats.size();
        int lastOneright = -1;
     
        for(int i = n-1;i>=0;i--)
        {
            if(seats[i]==1)
            {
                lastOneright = i;
            }
            else suff[i] = lastOneright;
        }
  
        int maxDist = 0 ; 
        for(int i = 0 ;i<n;i++)
        {
            if(seats[i]==0)
            {  if(pre[i]==-1)
              {
                  maxDist = max(abs(suff[i] - i),maxDist);
              }
           else if(suff[i]==-1)
                maxDist  = max(abs(pre[i]-i),maxDist);
            else maxDist = max(maxDist,min(abs(pre[i]-i),abs(suff[i]-i)));}
        }
        return maxDist ;
    }
};