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
    ListNode* reverse(ListNode* head)
    {
        if(!head)return head; 
        ListNode *pre = nullptr; 
        while(head)
        {
            auto t = head->next; 
            head->next = pre; 
            pre = head; 
            head = t;
        }
        return pre;
    }
    ListNode* reverseTill(ListNode* start, ListNode*end)
    {
        if(!start)return nullptr;
        ListNode *pre = nullptr; 
        while(start!=end)
        {
            auto t= start->next; 
            start->next = pre;
            pre = start; 
            start = t;
        }
        return pre;
        
    }
        int getSize(ListNode* head)
    {
        if(!head)return 0; 
        int cnt = 0 ; 
        while(head)
            cnt++,head = head->next;
        return cnt;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head or !k)return head; 
        int sz = getSize(head);
        if(sz==1)return head;
        k%=sz;
        if(k==0)return head;
        head = reverse(head);
        
        auto cur = head; 
        for(int i = 0;i<k;i++)
            cur = cur->next; 
        
        ListNode *newHead = reverseTill(head,cur);
        
        cur = reverse(cur);
        head->next = cur;
        return newHead;
        
    }
};