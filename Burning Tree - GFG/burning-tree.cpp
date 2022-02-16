// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minTime(Node* root, int target) 
    {
        unordered_map<Node*,Node*> m;
        queue<Node*> q;
        q.push(root);
        Node* targetNode = nullptr;
        while(q.size())
        {
            auto cur = q.front();
            q.pop();
            if(cur->data==target)
            targetNode = cur;
            if(cur->left)
            {
            m[cur->left] = cur;
            q.push(cur->left);
                
            }
            if(cur->right)
            {
                q.push(cur->right);
                m[cur->right]= cur;
            }
        }
        int ans = 0; 
        q.empty();
        q.push(targetNode);
       unordered_map<Node* , bool > visited;
       while(q.size())
       {
           int sz = q.size();
           ans++;
           while(sz--)
           {
               auto cur = q.front();
               q.pop();
               visited[cur] = true;
               if(cur->left and !visited[cur->left])
               {
                   q.push(cur->left);
                   
               }
               if(cur->right and !visited[cur->right])
               q.push(cur->right);
               if(m[cur]!=nullptr and !visited[m[cur]])
               q.push(m[cur]);
           }
       }
     return ans-1;   
    }
};

// { Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}
  // } Driver Code Ends