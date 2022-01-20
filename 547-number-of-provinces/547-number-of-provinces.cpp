class Solution {
public:
  vector<int> parent;
    int Find(int a)
    {
       if(parent[a]==-1)return a;
        return parent[a] = Find(parent[a]);
    }
    void Union(int a, int b)
    {
        a = Find(a);
        b = Find(b); 
        parent[b] = a; 
        
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
       parent.resize(isConnected.size()+1,-1);
        parent[0] = 1;
        for(int i = 0 ;i<isConnected.size();i++)
        {
            for(int j = 0 ;j<isConnected[i].size();j++)
            {
                if(isConnected[i][j])
                {
                    if(Find(i+1)!=Find(j+1))
                    {
                            Union(i+1,j+1);
                    }
                }
            }
        }
      int ans = 0 ;  
        for(auto c: parent)
        {
            if(c==-1)ans++;
        }
     return ans;}
   
};