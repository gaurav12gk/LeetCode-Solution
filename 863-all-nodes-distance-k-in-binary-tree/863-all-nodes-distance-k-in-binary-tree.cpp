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
        int time = 0;
        queue<pair<int,TreeNode*>> node;
        node.push({0,target});
        map<TreeNode*,bool> visited;
        while(node.size())
        {
            if(time++==k)break;
            int sz = node.size();
            for(int i = 0;i<sz;i++)
            {
          auto cur = node.front(); 
            int dist = cur.first; 
            auto root = cur.second;
            node.pop();
            visited[root] = true;
           
            if(root->left and !visited[root->left])
            {
                node.push({dist+1,root->left});
            }
            if(root->right and !visited[root->right])
                node.push({dist+1,root->right});
            
            if(m[root] and !visited[m[root]])
                node.push({dist+1,m[root]});
                
            }
         
        }
        while(node.size())
            ans.push_back(node.front().second->val),node.pop();
        return ans;
    }
};