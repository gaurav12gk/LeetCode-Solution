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
    int dia = INT_MIN;
    int traverse(TreeNode* root)
    {
        if(!root)return 0 ; 
        int lh = traverse(root->left);
        int rh = traverse(root->right);
        int th = max(lh,rh)+1;
        dia = max(dia,lh+rh+1);
        return th;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)return 0 ; 
        traverse(root);
        return dia-1;
    }
};