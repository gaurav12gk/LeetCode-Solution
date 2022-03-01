class Solution {
public:
 
    vector<int> countBits(int num) {
ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0);

        vector<int> ans(num+1);
        ans[0] = 0 ;
   
        for(int i = 1;i<num+1;i++)
           ans[i] = ans[i>>1] + (i&1);
        return ans;
    }
};