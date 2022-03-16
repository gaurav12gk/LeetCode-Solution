class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        int i = 0;
        for(auto c: pushed)
        {
            s.push(c);
            while(s.size() and s.top()==popped[i])
            {
                i++;
                s.pop();
            }
        }
        return s.size()?0:1;
    }
};