class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int>cap(1001);
        int maxe = 0 ;
        for(auto c: trips)
        {
            cap[c[1]]-=c[0];
            cap[c[2]]+=c[0];
            maxe = max(maxe , c[2]);
        }
    for(int i = 0 ;i<=maxe;i++)
    {
        capacity+=cap[i];
        if(capacity<0)return false;
    }
return true;    }
};