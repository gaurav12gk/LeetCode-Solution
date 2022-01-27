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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<unsigned long long,TreeNode*>> q;
        q.push({1,root});
     unsigned   long long ans = 0  ;
        while(q.size())
        {
            int sz = q.size();
           unsigned long long l = q.front().first, r = l;
            while(sz--)
            {
                auto cur = q.front().second;
               unsigned long long idx = q.front().first;
                q.pop();
                if(cur->left)q.push({2*idx,cur->left});
                if(cur->right)q.push({2*idx+1,cur->right});
                r = max(r,idx);
            }
        //    cout<<l<<" "<<r<<endl;
            ans = max(ans,r-l+1);
        }
        return ans;
    }
};