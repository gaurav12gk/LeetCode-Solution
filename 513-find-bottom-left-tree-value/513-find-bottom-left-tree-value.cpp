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
    int findBottomLeftValue(TreeNode* root) {
        if(!root)return 0 ; 
        queue<TreeNode*> q; 
        int ans = 0 ; 
        q.push(root);
        while(!q.empty())
        {
            int sz = q.size();
        
           for(int i = 0 ;i<sz;i++)
            {
                auto cur = q.front();
                q.pop();
                if(i==0)
                    ans = cur->val;
                if(cur->left)q.push(cur->left);
                if(cur->right)q.push(cur->right);
            }
        }
        return ans;
    }
};