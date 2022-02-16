class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> res(nums.size());
        int k = nums.size();
        int n = nums.size();
        stack<int> s; 
        s.push(nums[n-1]);
        for(int i = n-2;i>=0;i--)
        {
            while(s.size() and s.top()<=nums[i])
                s.pop();
            s.push(nums[i]);
        }
        for(int i = n-1;i>=0;i--)
        {
            if(!s.size())res[--k] = -1;
            while(s.size() and s.top()<=nums[i])
                s.pop();
            if(!s.size())res[--k] = -1;
            else res[--k] = s.top();
            s.push(nums[i]);
        }
        return res;
    }
};