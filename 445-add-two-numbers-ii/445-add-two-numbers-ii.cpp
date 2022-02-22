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
      l1 =   reverse(l1);
        l2 = reverse(l2);
        int sum = 0 ; 
   
        ListNode* ans = nullptr, *res = nullptr; 
        
        while(l1 or l2 or sum)
        {
            if(l1)
            {
                sum+=l1->val; 
                l1 = l1->next;
            }
            if(l2)
            {
                sum+=l2->val; 
                l2 = l2->next;
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