// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        if(!head)return head; 
        Node *pre = nullptr; 
        while(head)
        {
            auto temp = head->next;
            head->next = pre;
            pre = head;
            head  = temp;
        }
        head = pre;
        int sum = 1 ; 
        while(head)
        {
            if(head)
            {
                sum+=head->data;
               
               head->data = sum%10;
               sum/=10;
               if(!head->next)break;
               head = head->next;
            }
            
        }
    
        if(sum!=0)
        {
            Node *temp = new Node(sum);
            head->next = temp;
        }
        head = pre;
        pre  = nullptr;
        while(head)
        {
            auto temp = head->next; 
            head->next = pre;
            pre = head; 
            head = temp;
        }
        return pre;
        
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends