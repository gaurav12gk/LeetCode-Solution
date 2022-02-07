class Solution {
public:
    vector<string> phone = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
   
    vector<string> res; 
    void helper(string digit,int idx, string s)
    {
        if(idx == digit.size())
        {
            if(s!="")
            res.push_back(s);
            return;
        }
        int cur = digit[idx]-'0';
        
        for(int i = 0;i<phone[cur].size();i++)
        {
            s.push_back(phone[cur][i]);
                helper(digit,idx+1,s);
            s.pop_back();
        }
        
    }
    vector<string> letterCombinations(string digits) {
        helper(digits,0,"");
        return res;
    }
};