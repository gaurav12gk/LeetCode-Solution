class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int target) {
    int m  = v.size();
        int n = v[0].size();
       for(int i = 0 ;i<m;i++)
       {
           int low = 0 , high = n-1;
           while(low<=high)
           {
          int mid = (high+low)/2;
           if(v[i][mid]==target)return true;
               if(v[i][mid] > target) high = mid-1;
               else low = mid+1;
           }
       }
        return false;
    }
};