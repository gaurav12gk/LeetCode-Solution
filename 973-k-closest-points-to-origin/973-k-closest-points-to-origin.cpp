class Solution {
public:
    void check(   priority_queue<pair<int,pair<int,int>>> q)
    {
        while(q.size())
        {
            cout<<q.top().first<<"->";
            cout<<q.top().second.first<<","<<q.top().second.second<<"->";
            q.pop();
        }
        cout<<endl;
        
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<pair<int,int>,int>> v;
       priority_queue<pair<int,pair<int,int>>> q;
        for(auto c : points)
        {
            int dist = (c[0]*c[0]+c[1]*c[1]);
            if(q.size()==k)
            {
                if(q.top().first<dist)continue;
                else{
                    q.pop();
                    q.push({dist,{c[0],c[1]}});
                }
            }
            else
            q.push({dist,{c[0],c[1]}});
           // check(q);
            
        }
        vector<vector<int>> res;
        while(q.size())
        {
            auto a = q.top().second.first;
            auto b = q.top().second.second;
            res.push_back({a,b});
            q.pop();
        }
        return res;
    }
};