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
    ListNode* partition(ListNode* head, int x) {
        if(!head)return head;
        ListNode *ghead = nullptr,*lhead=nullptr;
        auto ans = lhead,res=ghead;
        while(head)
        {
            if(head->val >= x)
            {
                if(!ghead)
                    ghead = head,res =ghead;
                else {ghead->next = head;
                      ghead = ghead->next;};
            }
            else{
                if(!lhead)
                    lhead = head,ans = lhead;
                else lhead->next =head,lhead = lhead->next;
            }
            head = head->next;
        }
        if(!lhead)
        {
            ghead->next= head;
           return res; 
        }
        if(!ghead)
        {
            lhead->next = head;
           return ans; 
        }
        
        ghead->next = head;
        lhead->next = res;
        return ans;
        
    }
};