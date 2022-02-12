class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& v) {
        vector<int> indeg(numCourses);
        vector<vector<int>> adj(numCourses+1);
        for(auto c: v)
        {
            adj[c[1]].push_back(c[0]);
        }
        for(auto c: v)
        {
            indeg[c[0]]++;
        }
        queue<int> q;
        int cnt =0;
        for(int i = 0 ;i<numCourses;i++)
        {
            if(indeg[i]==0)q.push(i),cnt++;
        }
            // int cnt = 0;
        while(q.size())
        {
            int cur = q.front();
            q.pop();
            for(auto c: adj[cur] )
            {
                indeg[c]--;
                if(indeg[c]==0)
                    q.push(c),cnt++;
            }
        }
        
    return cnt == numCourses;
    }
};