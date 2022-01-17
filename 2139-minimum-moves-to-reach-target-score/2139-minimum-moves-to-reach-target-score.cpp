class Solution {
public:
    vector<long long>dp;
    long long minop(long long n, long long x)
    {
        if(n<1)return 0;
        if(n == 1)return 0 ; 
      
        
        if(x<=0){
            return n-1;
        }
        if(n&1)
            return 1+minop(n-1,x);
        else return 1+minop(n/2,x-1);
      
    }
    int minMoves(int target, int maxDoubles) {
   //    dp.resize(target*2+1,-1);
        int ans = minop(target ,  maxDoubles);
        return ans;
    }
};