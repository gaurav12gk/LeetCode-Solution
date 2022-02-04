class Solution {
public:
    vector<vector<int>> res;
  void  comb(vector<int> path,vector<int> v,int target ,int idx,int n )
    {
      
   if(idx==n)
   {
       if(target==0)res.push_back(path);
       return;
   }
      if(v[idx]<=target)
      {
          path.push_back(v[idx]);
         comb(path,v,target-v[idx],idx,n);
          path.pop_back();
      }      
            comb(path,v,target,idx+1,n);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> path;
        comb(path,candidates,target,0,candidates.size());
        return res;
    }
};