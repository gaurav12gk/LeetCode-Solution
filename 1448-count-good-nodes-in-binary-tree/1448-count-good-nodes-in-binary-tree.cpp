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
    int cnt = 0; 
    void getGoodNode(TreeNode *root, int maxNode)
    {
        if(!root)return; 
        if(root->val >= maxNode)
        {
            cnt++;
               getGoodNode(root->left,root->val);
        getGoodNode(root->right,root->val); 
        }
        else
{        getGoodNode(root->left,maxNode);
        getGoodNode(root->right,maxNode);
 }
        
    }
    int goodNodes(TreeNode* root) {
        if(!root)return 0; 
        if(!root->left and !root->right)return 1;
        
        getGoodNode(root,root->val);
        return cnt;
    }
};