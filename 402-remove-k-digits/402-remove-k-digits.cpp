class Solution {
public:
    string removeKdigits(string nums, int k) {
   if(nums.size()<=k or k ==0)return "0";
    vector<char> s; 
        string res="";
        s.push_back(nums[0]);
        for(int i = 1;i<nums.size();i++)
        {
            while(k and s.size() and s.back()>nums[i])
                s.pop_back() , k--;
            
            s.push_back(nums[i]);
            
            if(s.size()==1 and s.back()=='0')
                s.pop_back();
        }
        while(k and s.size())
            s.pop_back(),k--;
       for(int i = 0 ;i<s.size();i++)
           res+=s[i];
        
       
       
      if(res.size()==0)res="0";
        return res;
    }
};