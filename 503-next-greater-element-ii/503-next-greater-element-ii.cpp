class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
    vector<int> res(2*nums.size());
        int k = 2*nums.size();
        stack<int> s; 
        int x = nums.size();
        for(int i = 0 ;i<x;i++)
            nums.push_back(nums[i]);
        
        res[--k] = -1;
        s.push(nums[k-1]);
        int n = nums.size();
        for(int i = n-2;i>=0;i--)
        {
            if(s.size()==0)
            res[--k] = -1;
            while(s.size() and s.top()<=nums[i])
                s.pop();
            if(s.size()==0)
                res[--k] = -1;
            else res[--k] = s.top();
            s.push(nums[i]);
        }
        for(int i = 0;i<x;i++)
            res.pop_back();
        return res;
    }
};