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
    vector<int> ans;
    void getElements(TreeNode *root)
    {
        if(!root)return;
        ans.push_back(root->val);
        getElements(root->left);
        getElements(root->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        getElements(root1);
        getElements(root2);
        sort(ans.begin(),ans.end());
        return ans;
    }
};