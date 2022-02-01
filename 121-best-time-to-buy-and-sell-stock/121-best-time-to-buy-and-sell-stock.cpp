class Solution {
public:
    int maxProfit(vector<int>& prices) {
           ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int ans = -1;
        int min = prices[0];
      
        for(int i = 1;i<prices.size();i++)
        {
            if(prices[i] > min)
            {
                ans = std::max(ans,(prices[i] - min));
            }
            else{
                min =prices[i];
            }
        }
        if(ans==-1)return 0;
        return ans;
    }
};