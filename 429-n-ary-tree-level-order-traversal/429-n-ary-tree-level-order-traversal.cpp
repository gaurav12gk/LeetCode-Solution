
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
        vector<vector<int>> res;
        if(!root)return res;
        queue<Node*> q;
        q.push(root);
        
            vector<int> temp;
        while(q.size())
        {
            int sz = q.size();
            while(sz--)
            {
                auto cur = q.front();
                q.pop();
                temp.push_back(cur->val);
                for(auto c:cur->children)
                    if(c)q.push(c);
            }
            res.push_back(temp);temp.clear();
        }
    return res;
    }
};