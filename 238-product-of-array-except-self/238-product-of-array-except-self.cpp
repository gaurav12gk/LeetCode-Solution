class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size());
        vector<int> suff(nums.size());
        pre[0] = nums[0];
        int n = nums.size();
        suff[n-1] = nums[n-1];
        for(int i = 1;i<n;i++)
            pre[i] = pre[i-1]*nums[i];
        
       long long right = 1; 
        right = nums[n-1];
        nums[n-1] = pre[n-2];
        for(int i = n-2;i>0;i--)
        {
            int temp = nums[i];
            nums[i] = pre[i-1]*right;
            right*=temp;
        }
        nums[0] = right;
        return nums;
    }
};