class Solution {
public:
    bool isPalindrome(string s) {
        string r=s;
        string k ="";
        for(auto c:s)
            if(isalpha(c) or isdigit(c))k+=tolower(c);
        
        s=k;
 
        reverse(k.begin(),k.end());
    if(s==k)return true;
    return false;
    }
};