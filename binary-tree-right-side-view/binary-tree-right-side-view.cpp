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
    vector<int> rightSideView(TreeNode* root) {
        if(!root)return {};
        vector<int> ans; 
        queue<TreeNode*> q;
        q.push(root);
        int sz = q.size();
        while(!q.empty())
        {
            sz = q.size();
            vector<int> ele;
            for(int i = 0 ;i<sz;i++)
            {
                TreeNode* cur =  q.front();
                q.pop();
                ele.push_back(cur->val);
                if(cur->left)q.push(cur->left);
                if(cur->right)q.push(cur->right);
            }
            if(ele.size()!=0)
            ans.push_back(ele[ele.size()-1]);
            
        }
                          return ans;
    }
};