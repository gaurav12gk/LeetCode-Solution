class Solution {
public:
    int reverse(int x) {
      long long ans = 0;
        bool isNeg = false;
        if(x<0)isNeg = true;
        x=abs(x);
        while(x)
        {
                ans=ans*10+(x%10);
            x/=10;
        }
        if(isNeg)ans= -ans;
        if(ans < INT_MIN)return 0 ; 
        if(ans > INT_MAX)return 0 ; 
        else return ans;
    }
};