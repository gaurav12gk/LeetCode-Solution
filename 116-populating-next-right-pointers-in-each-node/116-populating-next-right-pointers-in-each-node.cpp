/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root)return root;
       queue<Node*> q; 
        
        q.push(root);
        while(!q.empty())
        {
            int sz = q.size();

                   auto cur = q.front();
                   cur->next = nullptr;
                   if(cur->left)q.push(cur->left);
                   if(cur->right)q.push(cur->right);
            q.pop();
            for(int i = 0 ;i<sz-1;i++)
            {
              auto temp = q.front();
                cur->next = temp;
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
                cur = temp;
                cur->next = nullptr;
                q.pop();
            }
        }
        return root;
    }
};