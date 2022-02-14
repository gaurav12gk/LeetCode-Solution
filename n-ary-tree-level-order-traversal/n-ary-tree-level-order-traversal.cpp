/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
        vector<vector<int>> res;
        if(!root)return res;
        queue<Node*> q;
        q.push(root);
        while(q.size())
        {
            int sz = q.size();
            vector<int> temp;
            while(sz--)
            {
                auto cur = q.front();
                q.pop();
                temp.push_back(cur->val);
                for(auto c:cur->children)
                    if(c)q.push(c);
            }
            res.push_back(temp);
        }
    return res;
    }
};