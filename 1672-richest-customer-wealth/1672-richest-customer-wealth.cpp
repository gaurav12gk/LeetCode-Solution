class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res = 0 ; 
        for(auto c: accounts)
        {
        int wealth=0;
            for(auto e:c)
            {
                wealth+=e;
            }
            res = max(res,wealth);
        }
        return res;
    }
};