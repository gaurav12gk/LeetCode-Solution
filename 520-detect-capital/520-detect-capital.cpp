class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper = 0 ;
        //check the first letter is capital or not 
        for(int i = 0 ;i<word.size();i++)
            if(isupper(word[i]))upper++;
        
        if(upper == word.size() or (upper ==1 and isupper(word[0])) or upper==0)return true;
        return false;
        
    
    }
};