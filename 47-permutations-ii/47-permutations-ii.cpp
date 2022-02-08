class Solution {
public:
    vector<vector<int>>res;
    void perm(vector<int> v, int idx)
    {
        if(idx==v.size()){
            res.push_back(v);
            return;
        }
        for(int i = idx;i<v.size();i++)
        {
         if(i!=idx and v[i] == v[idx])continue;  
              swap(v[i],v[idx]);
            perm(v,idx+1);
        }
        
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
   perm(nums,0);
        return res;
    }
};