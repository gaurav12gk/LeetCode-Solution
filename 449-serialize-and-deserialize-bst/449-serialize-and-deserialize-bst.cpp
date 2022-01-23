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
string s;
  
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
    if(!root)return "";
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            auto cur = q.front();
            q.pop();
                if(cur==nullptr)s.append("#,");
            else s.append(to_string(cur->val)+',');
            
            if(cur!=nullptr)
            {
                q.push(cur->left);
                q.push(cur->right);
            }
        }
       // cout<<s;
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
       if(data.size()==0)return nullptr;
        stringstream s(data);
        string str;
        getline(s,str,',');
        TreeNode* node = new TreeNode(stoi(str));
        queue<TreeNode*> q;
        q.push(node);
        while(!q.empty())
        {
            auto cur = q.front();
            q.pop();
            getline(s,str,',');
            if(str == "#")
            {
                    cur->left =nullptr;
            }
            else{
                TreeNode* nodeleft = new TreeNode(stoi(str));
                cur ->left = nodeleft;
                q.push(nodeleft);
            }
            
            getline(s,str,',');
            if(str ==  "#")
            {
cur->right = nullptr;
            }
        else{
            TreeNode * noderight = new TreeNode(stoi(str));
            cur->right = noderight;
            q.push(noderight);
        }
        }
        return node;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;