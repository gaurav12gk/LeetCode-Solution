class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper = 0 ;
        //check the first letter is capital or not 
        for(int i = 0 ;i<word.size();i++)
             if(word[i] >= 'A' && word[i] <= 'Z')upper++;
        
        if(upper == word.size() or (upper ==1 and (word[0] >= 'A' && word[0] <= 'Z')) or upper==0)return true;
        return false;
        
    
    }
};