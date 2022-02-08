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
    bool isPalindrome(ListNode* head) {
        if(!head->next or !head)return head;
        ListNode *fast = head, *slow = head , *pre= nullptr,*temp =nullptr;
        while(fast and fast->next)
        {
            fast = fast->next->next;
            temp = slow->next;
            slow->next = pre;
            pre = slow;
            slow = temp;
            
        }
        	slow = (fast ? slow -> next : slow);
        while(slow)
        {
            if(pre->val!=slow->val)return false;
            else{
                pre = pre->next;
                slow = slow->next;
            }
        }
        return true;
    }
};