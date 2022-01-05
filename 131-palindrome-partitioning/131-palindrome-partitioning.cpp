class Solution {
public:
    void pp(string s, vector<vector<string>> &res , vector<string> &path , int idx)
    {
        if(idx >=s.size())
        {
            res.push_back(path);
            return;
        }
        
        //Iterate over all paritioin and check for the palindrom e
        for(int i = idx;i<s.size();i++)
        {
            if(isPali(s,idx,i))
            {
                path.push_back(s.substr(idx , i-idx+1));
                pp(s,res,path,i+1);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
   vector<string> path;
        pp(s,ans,path,0);
        return ans;
    }
    private:
    bool isPali(string s, int l, int r)
    {while(l < r)
    {
        if(s[l++]!=s[r--])return false;
        
    }return true;}
    
};