
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
     
        getGoodNode(root,root->val);
        return cnt;
    }
};