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
        ListNode  *fast = head, *small = head;
        
        for(int i = 1;i<=n;i++)
        fast=fast->next;
        
        if(fast==nullptr)return head->next;
        while( fast->next)
        {
            small = small->next;
            fast = fast->next;
        }
        small->next = small->next->next;
        return  head;
    }
};