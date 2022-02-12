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
    TreeNode* helper(vector<int> v,int start,int end){
        if(start > end)return nullptr;
        int idx =-1, maxe =-1;
        int k = start;
        while(k<=end)
        {
            if(v[k]>maxe){
                maxe = v[k];
                idx = k;
            }
            k++;
        }
        TreeNode* root = new TreeNode(v[idx]);
        root->left = helper(v,start,idx-1);
        root->right = helper(v,idx+1,end);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return helper(nums,0,nums.size()-1);
    }
};