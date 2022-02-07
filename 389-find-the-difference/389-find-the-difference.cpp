class Solution {
public:
    char findTheDifference(string s, string t) {
     char y = 0 ;
        for(auto c: s+t)
            y^=c;
        return y;
    }
};