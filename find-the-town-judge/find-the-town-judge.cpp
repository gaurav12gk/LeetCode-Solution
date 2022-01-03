class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1)return 1;
    map<int,int> isTrusting;
        set<int> s;
        for(int i = 1;i<=n;i++)s.insert(i);
        set<int> b;
        for(auto c: trust)
        {
            if(s.find(c[0])!=s.end())
            s.erase(c[0]);
            isTrusting[c[1]]++;
            if(isTrusting[c[1]] >=n-1)
                b.insert(c[1]);
        }
        if(s.size()!=1)return -1;
        if(b.find(*s.begin())!=b.end())
            return *s.begin();
        return -1;
        
    }
};