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
    ListNode* middleNode(ListNode* head)
    {
        auto slow = head , fast = head; 
        while(fast and fast->next)
        {
            slow = slow->next; 
             fast = fast->next->next; 
            
        }return slow;
    }
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev = NULL;
        while(head )
        {
            auto temp = head->next; 
            head->next = prev; 
            prev = head; 
            head = temp;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
       if(!head or !head->next)return ;
        auto mid = middleNode(head); 
        auto R = reverse(mid) , L = head->next;
        auto res = head;
        for(int i = 0 ;R and L!=R ;i++)
        {
            if(i&1 and L){
                head ->next = L;
                head=head->next;
                L  = L->next;
            }
            else{
                head->next = R;
                head=head->next;
                R= R->next;
            }
        }
       
        
    }
};