class Solution {
public:
    
    int solve(TreeNode *node, bool &fl)
    {
        if(!node)
            return 0;
        int lf = solve(node -> left, fl);
        int rt = solve(node -> right, fl);
        if(abs(lf - rt) > 1)
            fl = false;
        return 1 + max(lf, rt);
    }
    
    bool isBalanced(TreeNode* root) {
        bool fl = true;
        solve(root, fl);
        return fl;
    }
};