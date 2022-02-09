class Solution {
public:
    bool isPresent(int x , vector<int> v , int idx)
    {
        int low = idx,high = v.size()-1;
        while(low <= high)
        {
            int mid = (high+low)/2;
            if(v[mid]==x)return true; 
            if(v[mid] > x)
                high = mid-1;
            else low = mid+1;
        }
        return false;
    }
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int cnt = 0 ; 
        int n = nums.size();
        for(int i = 0 ;i<n;i++)
        {
            int target = nums[i]+k;
            if(i==n-1 )continue;
            if(i>0 and nums[i]==nums[i-1])continue;
            if(isPresent(target,nums,i+1))
            {
                cnt++;
            }
        }
        return cnt;
    }
};