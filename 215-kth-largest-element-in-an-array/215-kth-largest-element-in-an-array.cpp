class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q;
        for(auto c:nums)q.push(c);
        if(k==0)return q.top();
        k--;
        while(k--)
        {
            q.pop();
        }
        return q.top();
    }
};