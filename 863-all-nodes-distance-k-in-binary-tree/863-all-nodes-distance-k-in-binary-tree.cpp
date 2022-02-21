/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<TreeNode*,TreeNode*>m;
    vector<int> ans; 
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        if(!root)return ans; 
        //Assigning the Parent 
        queue<TreeNode*>q;
        q.push(root);
        while(q.size())
        {
            auto cur = q.front(); 
            q.pop(); 
            if(cur->left){
                m[cur->left] =cur;
                q.push(cur->left);
            }
            if(cur->right)
            {
                m[cur->right] = cur;
                q.push(cur->right);
            }
        }
        
        queue<pair<int,TreeNode*>> node;
        node.push({0,target});
        map<TreeNode*,bool> visited;
        while(node.size())
        {
            auto cur = node.front(); 
            int dist = cur.first; 
            auto root = cur.second;
            node.pop();
            visited[root] = true;
            if(dist==k){
                ans.push_back(root->val);
                continue;
            }
            if(root->left and !visited[root->left])
            {
                node.push({dist+1,root->left});
            }
            if(root->right and !visited[root->right])
                node.push({dist+1,root->right});
            
            if(m[root] and !visited[m[root]])
                node.push({dist+1,m[root]});
        }
        return ans;
    }
};