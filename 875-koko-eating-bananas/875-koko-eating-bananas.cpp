class Solution {
public:
     bool check(vector<int> v , int h,int mid){
         
             int cnt = 0 ;
        for(int i = 0 ;i<v.size();i++)
        {
            
       if(v[i] < mid) cnt++;
       else if(v[i] >=mid)
       {
           if(v[i]%mid==0){
               cnt+=v[i]/mid;
           }
           else cnt+=v[i]/mid+1;
       }
            
        }
        bool val  = h<cnt? 0:1;

        return val;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        sort(piles.begin(),piles.end());
        int low = 1;
        int high = piles[piles.size()-1];
        int ans = INT_MAX;
         while(low <= high)
        {
            int mid = (high+low)/2;
            if(check(piles,h,mid)){
              
                ans = min(ans,mid);
                high = mid-1;
            }
            else low = mid+1;
            
        }
        return ans;
    }
};