class Solution {
public:
    vector<vector<int>> res;
    void comb(vector<int> v, int target,vector<int> path,int n, int idx)
    {
        if(idx == n)
        {
            if(target == 0)
                res.push_back(path);
            return;
        }
        if(v[idx]<=target)
        {
            path.push_back(v[idx]);
            comb(v,target-path.back(),path,n,idx);
            path.pop_back();
        }
        comb(v,target,path,n,idx+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<int> path;
        comb(candidates,target,path,candidates.size(),0);
        return res;
    }
};