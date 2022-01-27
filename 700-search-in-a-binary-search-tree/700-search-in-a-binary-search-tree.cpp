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
    TreeNode *res;
    void bst(TreeNode* root,int val)
    {
        if(!root)return ;
       else if(root->val == val){res = root;return;}
     else  if(root->val > val) bst(root->left,val);
     else  if(root->val < val)  bst(root->right,val);
      
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root)return nullptr;
         bst(root,val);
        return res;
    }
};