class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& nums) {
        vector<int> res; 
        
        vector<int> indeg(numCourses);
        vector<vector<int>> v(numCourses);
        for(auto c: nums)
        {
            v[c[1]].push_back(c[0]);
            indeg[c[0]]++;
        }
        
        queue<int> q;
        
        for(int i = 0;i<numCourses;i++)
            if(indeg[i]==0)q.push(i),res.push_back(i);
        
        while(q.size())
        {
            auto cur = q.front();
            q.pop();
            for(auto c: v[cur])
            {
                indeg[c]--;
                if(indeg[c]==0)
                  {  res.push_back(c);
                q.push(c);}
            }
        }
      if(res.size()!=numCourses){
          res.clear();
          
      }
        return res;
        
    }
};