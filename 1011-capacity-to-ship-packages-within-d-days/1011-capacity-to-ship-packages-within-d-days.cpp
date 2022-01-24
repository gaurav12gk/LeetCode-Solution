class Solution {
public:
    bool check(int mid , vector<int> v , int days)
    {
          int k = 1 ; 
           int cur_sum = 0 ; 
           for(int i = 0 ;i<v.size();i++)
         {
             cur_sum+=v[i];
             if(cur_sum > mid)
             {
                 k++;
                 cur_sum = v[i];
             }
        
             }
         return days>=k;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        long long sum = 0 ; 
        for(auto c: weights)sum+=c;
        
        int low = *max_element(weights.begin(),weights.end());
        int high = sum ; 
        int ans = -1;
        while(low<=high)
        {
            int mid = (high+low)/2;
            if(check(mid, weights, days))
            {
                ans  = mid;
                high = mid -1;
            }
            else low = mid+1;
        }
        return ans;
    }
};