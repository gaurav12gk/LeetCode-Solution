bool cmp(ListNode* a , ListNode* b){
    return a->val < b->val;
}

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<ListNode*> dp;
        ListNode *current , *res;
        
        for(int i =0;i<lists.size();i++){
            current = lists[i];
            if(current != NULL){
                while(current->next!=NULL){
                    dp.push_back(current);
                    current = current->next;
                }
                dp.push_back(current);
            }
        }
        if(dp.size() == 0) return NULL;
        sort(dp.begin(),dp.end(),cmp);
        res = dp[0];
        for(int j =1;j<dp.size();j++){
            dp[j-1]->next = dp[j];
        }
        dp[dp.size()-1]->next = NULL;
        return res;
    }
};