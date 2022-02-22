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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = nullptr;
        if(!list1)return list2;
        if(!list2)return list1;
        ans = list1->val > list2->val ? list2 : list1;
        if(ans==list1)list1 = list1->next; 
        if(ans == list2) list2 = list2->next;
        auto pre = ans; 
    
        while(list1 and list2)
        {
            if(list1->val > list2->val)
            {
                pre->next = list2;
                pre  = list2;
                list2=list2->next;
            }
            else {
                pre->next = list1; 
                pre = list1;
                list1=list1->next;
            }
        }
        if(list1)pre->next = list1; 
        else pre->next = list2;
        return ans;
    }
};