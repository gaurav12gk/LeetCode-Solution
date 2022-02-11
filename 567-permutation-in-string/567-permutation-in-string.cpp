class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
    unordered_map<char,int> ms,mt; 
        for(auto c: s1)ms[c]++;
        int i = 0 ,j= 0 ; 
        while(j<s2.size())
        {
            mt[s2[j]]++; 
            if(j-i+1 == s1.size())
              {  if(mt == ms)return true; }
          if(j-i+1 > s1.size())
          {
              while(j-i+1 > s1.size())
              {
                  mt[s2[i]]--; 
                  if(mt[s2[i]]==0) mt.erase(s2[i]);
                  i++;
              }
               if(j-i+1 == s1.size())
              {  if(mt == ms)return true; }
          }
           j++; 
        }
            return false;
    }
};