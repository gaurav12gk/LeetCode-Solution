class Solution {
public:
    int findKthLargest(vector<int>& v, int k) {
        priority_queue<int,vector<int>,greater<int>> q;
     for(auto c: v)
		{ 
			if(q.size()==k)
			{
				if(q.top()>c)continue;
				else{
					q.pop();
					q.push(c);
				}
			}
			else q.push(c);
		}
	return q.top();
    }
};