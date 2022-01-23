/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s="";
        if(!root)return "";
        queue<TreeNode*> q;
        q.push(root);
        while(q.size())
        {
        auto cur = q.front();
            q.pop();
            if(cur==nullptr)
            {
                s.append("#,");
            }
            else { 
            s.append(to_string(cur->val)+',');
            }
            if(cur!=nullptr)
            {
                q.push(cur->left);
                q.push(cur->right);
            }
        }
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size()==0)return nullptr;
        stringstream s(data);
        string str;
        getline(s,str,',');
        TreeNode* root = new TreeNode(stoi(str));
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            auto cur = q.front();
            q.pop();
            getline(s,str,',');
            if(str=="#")
            {
                cur->left =nullptr;
            }
            else{
                TreeNode *nodeleft = new TreeNode(stoi(str));
                cur->left =nodeleft;
                q.push(nodeleft);
            }
            
            getline(s,str,',');
            if(str=="#")
                cur->right = nullptr;
            else{
                TreeNode * rightnode =new TreeNode(stoi(str));
                cur->right = rightnode;
                q.push(rightnode);
            }
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));