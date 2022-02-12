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
    vector<vector<int>> paths;
    void dfs(TreeNode *root, int target , vector<int> track)
    {
        // if i was on the leaf node
        if(!root)return;
        if(!root->left and !root->right)
        {
            if(target-root->val == 0)
               track.push_back(root->val), paths.push_back(track);
            return;
        }
    
        track.push_back(root->val);
        dfs(root->left,target-track.back(),track);
       // track.pop_back();
        dfs(root->right,target-track.back(),track);
        track.pop_back();
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       vector<int> path;
        dfs(root,targetSum,path);
        return paths;
        
    }
};