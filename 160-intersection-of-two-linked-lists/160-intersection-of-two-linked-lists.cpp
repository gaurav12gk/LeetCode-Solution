/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*,bool> m; 
        
        while(headA)
        {
            m[headA]=true;
            headA=headA->next;
        }
        
        while(headB)
        {
            if(m[headB]==true)
            {
                return headB;
            }
            m[headB]=true;
            headB=headB->next;
        }
        return nullptr;
    }
};