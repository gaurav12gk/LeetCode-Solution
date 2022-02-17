class Solution {
public:
    vector<vector<int>> res; 
    void helper(int idx, int target, vector<int> path, vector<int> v)
    {
        if(idx == v.size())
        {
            if(target==0)res.push_back(path);
            return;
        }
        if(v[idx]<=target)
        {
            path.push_back(v[idx]);
            helper(idx,target-path.back(),path,v);
            path.pop_back();
        }
        helper(idx+1,target,path,v);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>path;
        helper(0,target,path,candidates);
        return res;
    }
};