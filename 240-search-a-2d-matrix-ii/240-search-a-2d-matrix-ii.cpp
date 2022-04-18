class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0 , j = matrix[0].size()-1;
        while(i<matrix.size() and i>=0 and j>=0 and j<matrix[0].size())
        {
            if(matrix[i][j]==target)return true;
            if(matrix[i][j]>target)
                j--;
            else if(matrix[i][j]<target)i++;
        }
        return false;
    }
};