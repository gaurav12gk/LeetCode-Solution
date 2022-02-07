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
              if (isupper(s[i]))
                s[i] = tolower(s[i]);
            else if (islower(s[i]))
                s[i] = toupper(s[i]);

            helper(s, i + 1);
        }
    }
    vector<string> letterCasePermutation(string s)
    {
        helper(s, 0);
        return res;
    }
};