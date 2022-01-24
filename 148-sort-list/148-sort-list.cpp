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
  
    ListNode* sortList(ListNode* head) {
        if(!head or !head->next)return head;
        
        auto fast =head , slow = head, pre = head; 
        while(fast and fast->next)
        {
            pre = slow; 
            slow = slow ->next; 
            fast = fast->next->next;
        }
        pre->next = nullptr; 
        auto left = sortList(head);
        auto right = sortList(slow);
        
        auto ans = merge(left,right);
        return ans;
    }
    
    private : 
    
    ListNode* merge(ListNode* left , ListNode *right)
    {
        ListNode newHead(-1);
        ListNode *pre = &newHead;
        while(left!=nullptr and right!=nullptr)
        {
            if(left->val > right->val)
            {
                pre->next = right;
                right =right->next; 
                pre = pre->next;
            }
            else{
                pre->next = left;
                left = left->next;
                pre = pre->next;
            }
        }
        if(left!=nullptr)
            pre->next = left;
        if(right!=nullptr)
            pre->next = right;
        
        return newHead.next;
    }
    
};
