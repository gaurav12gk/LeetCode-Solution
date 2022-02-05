class Solution {
public:
    vector<string> phone = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string>res;
   void lc(string digits,int n,int idx,string s)
    {
        if(idx==n){
            if(s!="")
            res.push_back(s);
            return;
        }
        int cur  = digits[idx]-'0';
     
     
        for(int i = 0 ;i<phone[cur].size();i++)
        {
            string op = s;
            op.push_back(phone[cur][i]);
            lc(digits,n,idx+1,op);
       
        }
        
        
    }  
    vector<string> letterCombinations(string digits) {
      lc(digits,digits.size(),0,"");
        return res;
    }
};