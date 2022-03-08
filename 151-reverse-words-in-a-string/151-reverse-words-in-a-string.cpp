class Solution {
public:
    string reverseWords(string sr) {
        string ans; 
      stack<string> s; 
        stringstream str(sr); 
        string word;
       while(str>>word)
       {
        s.push(word);
       }
        
        while(s.size())
        {
           ans+=s.top();
            s.pop();
            if(!s.size())break;
            ans.push_back(' ');
            
        }
        return ans;
    }
};