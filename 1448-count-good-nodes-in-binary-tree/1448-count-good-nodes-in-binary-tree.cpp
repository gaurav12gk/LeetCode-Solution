
class Solution {
public:
    int cnt = 0; 
    void getGoodNode(TreeNode *root, int maxNode)
    {
        if(!root)return; 
        if(root->val >= maxNode)
        {
            cnt++;
            maxNode = root->val;
              
        }
        
        getGoodNode(root->left,maxNode);
        getGoodNode(root->right,maxNode);
 
        
    }
    int goodNodes(TreeNode* root) {
        if(!root)return 0; 
        if(!root->left and !root->right)return 1;
        
        getGoodNode(root,root->val);
        return cnt;
    }
};