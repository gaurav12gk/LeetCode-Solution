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
    ListNode* deleteMiddle(ListNode* head) {
        
        //Edge Case
        if(head->next==nullptr)return head = nullptr;
        
        
        ListNode *f= head->next->next, *s =head;
      
        
       
        while(f and f->next)
        {
            f = f->next->next ; 
            s = s->next;
        }
        s->next = s->next->next;
     
        return head;
    }
};