class Solution {
public:
    int threeSumClosest(vector<int>& v, int target) {
        int res = 0 ; 
        int diff = INT_MAX;
        sort(v.begin(),v.end());
        
        for(int i = 0 ;i<v.size()-1;i++)
        {
            int low = i+1, high = v.size()-1;
            while(low<high)
            {
                if(abs(v[i] + v[low] + v[high] - target)==0)
                    return v[i] + v[low] + v[high];
            if(diff > abs(v[i] + v[low] + v[high] - target))
            {
                diff = abs(v[i] + v[low] + v[high] - target);
                res = v[i] + v[low]+ v[high];
                
                
            }
                 if(v[i] + v[low]+ v[high] > target)
                    high--;
                else low++;
            }
        }
        return res;
    }
};