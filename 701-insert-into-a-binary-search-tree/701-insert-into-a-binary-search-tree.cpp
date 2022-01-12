class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL) return new TreeNode(val);
        TreeNode *node = root;
        while (true) {
            if (val > node->val) { // Continue searching in the right subtree
                if (node->right) { // the position is occupied, continue to search
                    node = node->right;
                } else { // position is empty, insert position found and break the loop
                    node->right = new TreeNode(val);
                    break;
                }
            } else { // Continue searching in the left subtree
                if (node->left) { // the position is occupied, continue to search
                    node = node->left;
                    } else { // position is empty, insert position found and break the loop
                    node->left = new TreeNode(val);
                    break;
                }
            }
        }
        return root;
    }
};