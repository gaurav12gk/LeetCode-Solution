class Solution {
public:
    int rob(vector<int>& num) {
         int a = num[0];
    int b = 0;
    int n = num.size();
    for (int i=1; i<n; i++)
    {
        int take = num[i];
        if(i>1)take+=b;
        int noTake = a;
        
        int curMax   = max(take,noTake);
     b = a; 
        a = curMax;
    }
    
    return max(a, b);
    }
};