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
        ListNode *f= head, *s =head,*temp=head;
        if(head->next==nullptr)return head = nullptr;
        while(f and f->next)
        {
            f = f->next->next ; 
            temp = s;
            s = s->next;
        }
        temp->next = s->next;
        delete(s);
        return head;
    }
};