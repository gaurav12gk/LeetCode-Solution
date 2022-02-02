class Solution {
public:
    void moveZeroes(vector<int>& v) {
   int i = 0 , j = 0; 
        while(i<v.size() and v[i]!=0)i++;
        // 1 3 3 0 1
        j = i+1;
        while(j<v.size())
        {
            if(v[j]!=0)
            {
             v[i++] = v[j];
                v[j] = 0;
            }
            
            j++;
        }
        
    }
};