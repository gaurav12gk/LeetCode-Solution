class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int cnt = 0 ; 
        vector<int> v(60,0);
        for(auto c: time)
        {
            if(c%60==0)
                cnt+=v[0];
            else cnt+=v[60 - c%60];
            
            v[c%60]++;
        }
        return cnt;
    }
};