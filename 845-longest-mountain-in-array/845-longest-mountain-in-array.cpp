class Solution {
public:
    int longestMountain(vector<int>&v) {
        int ans = 0 ; 
          int i = 0 , j = 1 ; 
        while(j<v.size())
        {
            if(v[j] > v[j-1]){
                while( j< v.size() and v[j] > v[j-1] )
                { 
                    // inc = true; 
                   
               
                        j++;
                }
             //   debug(j)
                while( j< v.size() and v[j] < v[j-1] )
                {
                    // dec = true;
                   // debug(v[j])
                    
                    ans = max(ans,j-i+1);
                    j++;
                }
              //  debug(ans)
                j--;
            }
            i = j;
           j++;
        }
        return ans;
          
    }
};