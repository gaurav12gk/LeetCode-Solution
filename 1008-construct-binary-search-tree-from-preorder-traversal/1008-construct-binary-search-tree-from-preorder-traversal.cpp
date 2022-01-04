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
    TreeNode* build(TreeNode* &root, int ele)
    {
        if(!root)
            return root = new TreeNode(ele);
        if(root->val > ele)
            root->left = build(root->left,ele);
        if(root->val < ele)
            root->right = build(root->right,ele);
        
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root;
        for(auto c:preorder)
            build(root,c);
        return root;
    }
};