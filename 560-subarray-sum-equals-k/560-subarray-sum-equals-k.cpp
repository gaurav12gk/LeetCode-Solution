class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> umap;
        int res = 0;
        int sum = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            
            if(sum == k)
            {
                res++;
            }
            
            if(umap.find(sum - k) != umap.end()) // exists
            {
                res += umap[sum - k];
            }
            umap[sum]++;
        }
        return res;
    }
};