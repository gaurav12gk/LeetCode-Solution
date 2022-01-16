class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        vector<int> pre(seats.size(),-1);
        vector<int> suff(seats.size(),-1);
            int lastOneleft = -1;
        if(seats[0]==1)lastOneleft = 0;
        
        for(int i = 1 ;i<seats.size();i++)
        {
        if(seats[i]==1){
            lastOneleft = i;
        }
            else pre[i] = lastOneleft;
        }
        int n = seats.size();
        int lastOneright = -1;
        if(seats[n-1]==1)lastOneright = n-1;
        for(int i = n-2;i>=0;i--)
        {
            if(seats[i]==1)
            {
                lastOneright = i;
            }
            else suff[i] = lastOneright;
        }
        for(auto c  :pre)cout<<c<<" ";
        cout<<endl;
        for(auto c: suff) cout<<c<<" ";
        
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