class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0 ;
        int cnt = 0 ; 
        map<int,int> m; 
                 m[0]++; 
        for(auto c: nums)
        {
            sum+=c; 
            cnt+=m[sum-k]; 
            m[sum]++;
        }
        return cnt;
    }
};