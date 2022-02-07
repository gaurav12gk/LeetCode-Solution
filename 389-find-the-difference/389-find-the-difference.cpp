class Solution {
public:
    char findTheDifference(string s, string t) {
     char y = 0 ;
        for(auto c: s)
            y^=c;
        for(auto c:t)y^=c;
        return y;
    }
};