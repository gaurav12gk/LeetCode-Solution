class Solution {
public:
    string removeKdigits(string nums, int k) {
   if(nums.size()<=k or k ==0)return "0";
        stack<char> s; 
        string res="";
        s.push(nums[0]);
        for(int i = 1;i<nums.size();i++)
        {
            while(k and s.size() and s.top()>nums[i])
                s.pop() , k--;
            
            s.push(nums[i]);
            
            // if(s.size()==1 and s.top()=='0')
            //     s.pop();
        }
        while(k)
            s.pop(),k--;
        while(s.size())
            res.push_back(s.top()),s.pop();
        
        reverse(res.begin(),res.end());
       
        cout<<res;
        int i = 0 ; 
        while(res[i]=='0')
            i++;
        res = res.substr(i,res.size()+1);
        if(res.size()==0)res="0";
        return res;
    }
};