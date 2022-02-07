class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> m(26,0);
        for(auto c: s)m[c-'a']--;
        for(auto c: t)m[c-'a']++;
        for(int i = 0 ;i<26;i++)
            if(m[i]>0)return (char)(i+'a');
        return 'c';
    }
};