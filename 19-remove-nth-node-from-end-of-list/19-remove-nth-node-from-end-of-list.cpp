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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head,*res = head; 
        int sz = 0 ;
        if(head->next==nullptr and n==1){
            head = nullptr;
            return head;
        }
        if(head->next == nullptr and n==0){
            return head;
        }
        //calculating the size of the linked list 
        
        while(temp)
        {
            temp=temp->next;
            sz++;
            
        }
         n = sz - n ;
        if(n==0)
        {
            head = head->next;
            return head;
        }
        int cnt =1; 
        while(head->next)
        {
                if(cnt == n)
                {
                    ListNode* delti = head->next;
                    head->next = delti->next;
                    delete(delti);
                return res;
                }
            cnt++;
            head = head->next;
        }
    return res;
    }
};