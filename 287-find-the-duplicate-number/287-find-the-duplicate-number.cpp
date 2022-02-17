class Solution {
public:
    //Time complexity = O(nlogn) 
    // Space complexity = O(1)
  
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int low = 0 , high = nums.size();
        int ans = -1 ; 
         while(high >=low)
         {
             int mid = (low+high)>>1;
             int cnt = 0;
             for(auto c: nums)if(mid>=c)cnt++;
             if(cnt>mid)
                 ans = mid , high = mid-1;
             else low = mid+1;
         }
    return ans;
    }
};