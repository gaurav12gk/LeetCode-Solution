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
    //Approach 1 : simple dfs to count nodes 
    int nodes = 0; 
    void dfs(TreeNode *root){
        if(!root)return ; 
        nodes++;
        dfs(root->left);
        dfs(root->right);
    }
    int countNodes(TreeNode* root) {
        dfs(root);
        return nodes;
    }
};