class Solution
{
public:
    vector<string> res;
    void helper(string s, int i)
    {
        if (i == s.size())
        {
            res.push_back(s);
            return;
        }

     helper(s,i+1);
       if(!isdigit(s[i]))
        {
            s[i]^= 1<<5;

            helper(s, i + 1);
        }
    }
    vector<string> letterCasePermutation(string s)
    {
        helper(s, 0);
        return res;
    }
};