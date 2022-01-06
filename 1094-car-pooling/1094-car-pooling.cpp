class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int>cap(1001);
        for(auto c: trips)
        {
            cap[c[1]]-=c[0];
            cap[c[2]]+=c[0];
        }
    for(int i = 0 ;i<=1000;i++)
    {
        capacity+=cap[i];
        if(capacity<0)return false;
    }
return true;    }
};