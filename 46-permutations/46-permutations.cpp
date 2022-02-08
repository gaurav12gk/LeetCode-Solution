class Solution {
public:
    vector<vector<int>> res;
    void perm(vector<int> v, int idx)
    {
        if(idx==v.size())
        {
            res.push_back(v);
            
        }
        for(int i = idx;i<v.size();i++)
        {
            swap(v[i],v[idx]);
            perm(v,idx+1);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        perm(nums,0);
        return res;
    }
};