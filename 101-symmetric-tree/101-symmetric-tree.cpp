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
    
    bool istrue(TreeNode* root1 , TreeNode* root2)
    {
if(!root1 and !root2)return true;
        if(!root1 and root2)return false;
        if(root1 and !root2)return false;
    
        if(root1->val!=root2->val)return false;
    
return istrue(root1->left ,root2->right) and istrue(root1->right , root2->left);
        
        
        
    }
    bool isSymmetric(TreeNode* root) {
     if(!root)return false; 
     //   if(root->right->data != root->left->data)return false;
        return istrue(root->right,root->left);
    }
};