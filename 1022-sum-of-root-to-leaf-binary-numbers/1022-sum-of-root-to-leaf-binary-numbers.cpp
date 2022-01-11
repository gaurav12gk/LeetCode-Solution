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
        int ans = 0 ;
        void sum(string s,TreeNode* root)
        {if(!root)return;
            if(root->left==nullptr and root->right==nullptr)
            { 
                 s+=to_string(root->val);
              
               // reverse(s.begin(),s.end());
             
                for(int i = 0 ;i<s.size();i++)
                {
                    int k = s[i]-'0';
                    ans+=k*(1<<(s.size()-i-1));
                }
               
                 return ;
            }
       
                s+=to_string(root->val);
                sum(s,root->left);

                sum(s,root->right);
       

        }
        int sumRootToLeaf(TreeNode* root) {
            if(!root)return 0; 
          
          sum("",root);
            return ans;
        }
    };