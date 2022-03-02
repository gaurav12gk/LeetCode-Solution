class Solution {
public:
    bool isSubsequence(string tt, string s) {
        
        int t=0 ; 
        string ans =""; 
        int i = 0 ; 
        while(i<s.size() and t<tt.size())
        {
            if(s[i]==tt[t]){
                ans+=s[i];
                i++,t++;
            }
          else  i++;
        }
        if(ans==tt)return true; 
        else return false;
    }
};