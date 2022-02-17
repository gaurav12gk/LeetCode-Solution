class Solution {
public:
    int check(int mid , vector<int> v)
    {
        int cnt = 0 ; 
        for(auto c: v)
        {
            if(mid >=c)cnt++;
        }
        return cnt;
    }
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int low = 0 , high = nums.size();
        int ans = -1 ; 
         while(high >=low)
         {
             int mid = (low+high)>>1;
             if(check(mid,nums)>mid)
                 ans = mid , high = mid-1;
             else low = mid+1;
         }
    return ans;
    }
};