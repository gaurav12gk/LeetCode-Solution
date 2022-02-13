class Solution {
public:
    vector<vector<int>> res; 
    void helper(vector<int> v, int idx, vector<int> path)
    {
        if(idx>=v.size())
        {
            res.push_back(path);
            return;
        }
       
        path.push_back(v[idx]);
        helper(v,idx+1,path);
        path.pop_back();
         helper(v,idx+1,path);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
     vector<int> path;
        helper(nums,0,path);
        return res;
    }
};