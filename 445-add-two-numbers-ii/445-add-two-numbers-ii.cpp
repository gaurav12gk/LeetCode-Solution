/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* &l1)
    {
        if(!l1)return nullptr; 
        ListNode* ptr = nullptr; 
       
        while(l1)
        {
            auto temp = l1->next; 
            l1->next = ptr; 
            ptr = l1; 
            l1 = temp;
          
        }
        return ptr;
    }
    
 
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     stack<ListNode*> s,s2;
        while(l1)
        {
            if(l1)
            s.push(l1);
            l1 = l1->next;
        }
          while(l2)
        {
            if(l2)
            s2.push(l2);
            l2 = l2->next;
        }
        int sum = 0 ; 
   
        ListNode* ans = nullptr, *res = nullptr; 
        
        while(s.size() or s2.size() or sum)
        {
            if(s.size())
            {
                sum+=s.top()->val; 
                s.pop();
              
            }
           if(s2.size())
            {
                sum+=s2.top()->val; 
               s2.pop();
            }
            ListNode *temp = new ListNode(sum%10);
            if(!res)
            {
                res =temp;
                ans = res;
            }
            else { 
            res->next = temp;
            res = res->next;
            }
            sum/=10;
        }
       ans = reverse(ans);
        return ans;
        
    }
};