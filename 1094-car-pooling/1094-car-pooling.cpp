class Solution {
public:
   static bool cmp(vector<int> &a,vector<int> &b)
    {
         if(a[1]==b[1])return a[2] <b[2];
            return a[1]<b[1];
    }
    bool carPooling(vector<vector<int>>& trip, int c) {
      
             map<int,priority_queue<int>> in,out;
            sort(trip.begin(),trip.end(),cmp);
           
             for(auto x: trip){
               
               
                in[x[1]].push(x[0]);
                out[x[2]].push(x[0]);
            
            }
             for(int i = 0;i<=1000;i++)
            {
            
            
               
                    while (out[i].size()!=0)
                  {
                     c+=out[i].top();
                     out[i].pop();
                  }
               
              
                  while (in[i].size()!=0)
                  {
                     c-=in[i].top();
                     in[i].pop();
                  }
           
                if(c<0)return false;
            }
       return true;
        
    }
};