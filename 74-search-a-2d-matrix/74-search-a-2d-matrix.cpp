class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = 0 ; 
        int n = matrix.size();
        int m = matrix[0].size();
         if(target < matrix[0][0] or target > matrix[n-1][m-1])return false;
      
        int low = 0 , high = n-1;
        while(low<=high)
        {
           int mid = (high+low)/2;
            // cout<<mid<<" ";
            // cout<<matrix[mid][0]<<" ";
            if(matrix[mid][0]==target)
                return true;
            else if(matrix[mid][0]<target)
            {
               row = mid;
                low = mid+1;
            }
            else high = mid-1;
        }
        // cout<<"Row";
        // cout<<row<<" ";
        //Checking inside the row for the target 
        low = 0 , high = m-1;
        while(low<=high)
        {
            int mid = (high+low)/2;
            if(matrix[row][mid]==target)return true;
            else if(matrix[row][mid]>target)
                high = mid-1;
            else low = mid+1;
        }
        return false;
    }
};