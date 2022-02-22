class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = 0 ; 
        ListNode* res = nullptr; 
        ListNode* ans = nullptr;
     
        while(l1 or l2 or sum>0 )
        {
            if(l1)
            {
                sum+=l1->val;
                l1 = l1->next;
            }
            if(l2)
            {
                sum+=l2->val;
                l2= l2->next; 
                
            }
            ListNode *temp = new ListNode(sum%10);
          
            if(res == nullptr)
            {
                res = temp;
                ans = res;
            }
            else{
                res->next  = temp;
                res = res->next;
            }
            sum/=10;
        }
      
        return ans;
    }
};
      