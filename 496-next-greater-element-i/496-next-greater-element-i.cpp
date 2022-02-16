class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m; 
        stack<int> s; 
        int n = nums2.size();
        m[nums2[n-1]] = -1;
        s.push(nums2[n-1]);
        for(int i = n-2;i>=0;i--)
        {
            if(s.size()==0)
            {
                m[nums2[i]]=-1;
             
            }
            while(s.size() and s.top()<nums2[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                m[nums2[i]] = -1;
             
            }
            else {
                m[nums2[i]] = s.top();
                
            }
            s.push(nums2[i]);
        }
        vector<int> res; 
        for(auto c: nums1)
        {
            res.push_back(m[c]);
        }
        return res;
    }
};