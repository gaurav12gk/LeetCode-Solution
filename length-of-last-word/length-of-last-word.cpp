class Solution {
public:
    int lengthOfLastWord(string s) {
   vector<int> res;
        for(int i = 0 ;i<s.size();i++)
        {
            int maxe = 0 ;
            if(s[i]!=' ')
            while(i<s.size() and s[i]!=' ')
            {
                maxe++;
                i++;
                
            }
            if(maxe!=0)
            res.push_back(maxe);
        }
        return res[res.size()-1];
    }
};