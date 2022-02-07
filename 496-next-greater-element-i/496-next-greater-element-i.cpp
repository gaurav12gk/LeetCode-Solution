class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res(nums2.size());
        stack<int> s;
        
    for(int i =nums2.size()-1;i>=0;i--)
    {
        if(s.size()==0)
        {
            res[i] = -1;
            s.push(nums2[i]);
            continue;
        }
        while(s.top()<nums2[i])
         { 
            s.pop();
        if(s.size()==0)break;
        }
        if(s.size()==0){
            res[i]=-1;
            s.push(nums2[i]);
            continue;
        }
        res[i] = s.top();
        s.push(nums2[i]);
        
    }
        // for(auto c: res)
        //     cout<<c<<" ";
        vector<int> ans;
    //    return ans;
        map<int,int> m; 
        for(int i = 0 ;i<nums2.size();i++)
        {
            m[nums2[i]] = res[i];
        }
       
        for(auto c :nums1)
            ans.push_back(m[c]);
        return ans;
    }
};