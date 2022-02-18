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
            
            // if(s.size()==1 and s.top()=='0')
            //     s.pop();
        }
        while(k)
            s.pop_back(),k--;
        while(s.size())
            res.push_back(s.back()),s.pop_back();
        
        reverse(res.begin(),res.end());
       
      //  cout<<res;
        int i = 0 ; 
        while(res[i]=='0')
            i++;
        res = res.substr(i,res.size()+1);
        if(res.size()==0)res="0";
        return res;
    }
};