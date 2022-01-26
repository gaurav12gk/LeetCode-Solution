/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res; 
        if(!root)return res;
        queue<TreeNode*> q;
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
                if(cur->left)q.push(cur->left);
                if(cur->right)q.push(cur->right);
                
            }
            res.push_back(temp);
        }
        if(res.size()==1)return res;
    for(int i = 1;i<res.size();i+=2)
    {
        reverse(res[i].begin(),res[i].end());
    }
        return res;
    }
};