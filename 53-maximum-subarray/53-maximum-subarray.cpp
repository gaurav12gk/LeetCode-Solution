class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        int m=nums[0];
        int cur=0;
    for(int i=0;i<nums.size();i++)
    { 
    cur+=nums[i]; 
    m = max(m,cur);
        cur = max(cur,0 ); 
    }
        return m;
    }
};