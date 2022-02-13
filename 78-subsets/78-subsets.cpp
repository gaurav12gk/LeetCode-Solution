class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
     vector<vector<int>> res; 
        for(int i = 0 ;i<pow(2,nums.size());i++)
        {
            vector<int> v;
            for(int j = 0 ;j<31;j++)
            {
                int k = 1 << j; 
                if(k&i)
                {
                    v.push_back(nums[j]);
                }
            }
            res.push_back(v);
        }
        return res;
    }
};