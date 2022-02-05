class Solution {
public:
    vector<string> res;
    void gp(int n,int open,int close , string s)
    {
        if(open==n and close==n){
            res.push_back(s);
            return;
        }
      if(open!=n)
      {
        string op = s;
        op.push_back('(');
        gp(n,open+1,close,op);
      }
      if(open > close)
      {
        string op = s;
        op.push_back(')');
        gp(n,open,close+1,op);
      }

    }
    vector<string> generateParenthesis(int n) {
        gp(n,0,0,"");
        return res;
    }
};