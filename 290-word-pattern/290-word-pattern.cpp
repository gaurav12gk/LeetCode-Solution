class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string> m;
        int i= 0 , j = 0 ; 
        string res ="";
        map<string,char> secondm;
        int cnt = 0 ; 
      while(j<s.size() and i<pattern.size())
        {
                if(s[j]==' ')
                {cnt++;
                    if(m.find(pattern[i])!=m.end())
                       { if(res!=m[pattern[i]])return false;}
                    
                    else m[pattern[i]] = res;

                    if(secondm.find(res)!=secondm.end())
                          {if(pattern[i]!=secondm[res])return false;}
                    
                    else secondm[res] = pattern[i];
                    i++;
                    res="";
                }
            else res+=s[j];
            j++;
        }
          if(m.find(pattern[i])!=m.end())
                        if(res!=m[pattern[i]])return false;
                    
                     if(secondm.find(res)!=secondm.end())
                        if(pattern[i]!=secondm[res])return false;
                    
                   if(cnt!=pattern.size()-1)return false;
        return true;
    }
};