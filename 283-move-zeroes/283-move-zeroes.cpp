class Solution {
public:
    void moveZeroes(vector<int>& v) {
     map<int,int> m; 
        for(int i = 0 ;i<v.size();i++)
            if(v[i]!=0)m[i]= v[i];
        
        int idx = 0 ; 
        for(auto c: m)
        {
            v[idx++] = c.second;
        }
        while(idx<v.size())
            v[idx++] = 0;
    }
};