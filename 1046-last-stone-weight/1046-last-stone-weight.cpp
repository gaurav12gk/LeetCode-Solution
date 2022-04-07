class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q; 
        for(auto c: stones)q.push(c);
        
        while(q.size()!=1)
        {
            int a = q.top();
            q.pop();
            int b = q.top();
            q.pop();
            q.push(a-b);
        }
        return q.top();
    }
};