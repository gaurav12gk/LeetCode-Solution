class Solution {
public:
     bool check(vector<int> v , int h,int mid){
         
             int cnt = 0 ;
        for(int i = 0 ;i<v.size();i++)
      cnt+=v[i]/mid + bool(v[i]%mid);
         
        bool val  = h<cnt? 0:1;

        return val;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long sum = 0 ;
       int mx = INT_MIN;
        for(auto c: piles){
            sum+=c;
            mx =max(mx,c);
        }
        long long low = sum/h;
        if(low ==0)low = 1;
        long long high = mx;
        long long ans = INT_MAX;
         while(low <= high)
        {
            long long mid = (high+low)/2;
            if(check(piles,h,mid)){
              
                ans = min(ans,mid);
                high = mid-1;
            }
            else low = mid+1;
            
        }
        return ans;
    }
};