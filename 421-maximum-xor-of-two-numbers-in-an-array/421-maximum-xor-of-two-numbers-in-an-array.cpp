class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int mask = 0 , ans = 0 ; 
        set<int> s;
        for(int bit = 31;bit>=0;bit--)
        {
            mask|=(1<<bit);
            
            //use the set
            for(auto c:nums)
                s.insert(mask&c);
            
            int temp = ans|(1<<bit);
            
            for(auto c:s)
            {
                if(s.count(c^temp))
                {
                    ans = temp;
                    break;
                }
            }
            s.clear();
            
        }
    return ans;}
};