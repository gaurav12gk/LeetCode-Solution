class Solution {
public:
    int findMaxLength(vector<int>& v) {
        int ans = 0 , sum =0 ; 
        map<int,int> m;
        for(int i = 0 ;i<v.size();i++)
        {
        sum+=v[i]==0?-1:1;
    
            
            if(sum==0)
       {   
                if(ans < i+1 ) ans = i+1; 
           
       }
            else if(m[sum])
                {if(ans < i+1-m[sum])
                 ans = i + 1 - m[sum]; }
            
            else m[sum] = i+1;
                    
        }
        return ans;
    }
};