class Solution {
public:
    vector<long long>dp;
    long long minop(long long n, long long x, long long val)
    {
        if(val > n)return INT_MAX;
        if(val == n)return 0 ; 
        if(dp[val]!=-1)return dp[val];
        
        if(x==0){
            return dp[val] = 1+minop(n,x,val+1);
        }
        else return dp[val] = min(1+minop(n,x,val+1) , 1+minop(n,x-1,val*2));
    }
    int minMoves(int target, int maxDoubles) {
        if(maxDoubles ==0) return target -1;
        int ans = 0 ;
            while(target!=1 and maxDoubles)
            {
                if(target & 1 ){
                    target--;
                    ans++;
                }
                else {
                    maxDoubles--;
                    target/=2;
                    ans++;
                }
            }
        ans+=target -1;
        return ans;
    }
};