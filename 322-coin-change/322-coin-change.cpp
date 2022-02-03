class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        //Bottom - UP approach DP 
        vector<int> dp(amount+1,1e8);
        dp[0] = 0 ; 
        for(int i = 1; i<amount+1;i++)
        {
            
            for(int j = 0 ;j<coins.size();j++)
            {
                if(i>=coins[j])
                dp[i]= min(dp[i] , 1+dp[i-coins[j]]);
                
            }
        }
        int ans = dp[amount]; 
        if(ans==1e8)return -1;
        else
        return dp[amount];
    }
};