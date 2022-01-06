class Solution {
public:
    int jump(vector<int>& arr) {
        int n = arr.size();
           int curMx = 0 , jump = 0 , curReach = 0 ; 
        for(int i = 0 ;i<n-1;i++)
        {
            if(i+arr[i] > curMx)
            curMx = i+arr[i];
            
            if(i==curReach)
            {
                jump++;
                curReach = curMx;
            }
        }
        return jump;
    }
};