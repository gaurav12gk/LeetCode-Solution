/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root or root == q or root == p)return root;
        
        TreeNode *leftnode = lowestCommonAncestor(root->left,p,q);
        TreeNode *rightnode = lowestCommonAncestor(root->right,p,q);
        
        if(!leftnode)return rightnode;
        else if(!rightnode)return leftnode;
        else return root;
    }
};