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
    ListNode* giveCycle(ListNode* head)
    {
       auto walker = head, runner = head;
        while(walker and runner and runner->next)
        {
            walker = walker ->next;
            runner = runner ->next->next;
     if(walker == runner)return walker;
        }
        return nullptr;  
    }
    ListNode *detectCycle(ListNode *head) {
     auto cycleNode = giveCycle(head);
        if(!cycleNode)return nullptr;
        auto start = head;
        while(start!=cycleNode)
        {
            start = start->next;
            cycleNode = cycleNode->next;
        }
        return start;
    }
};