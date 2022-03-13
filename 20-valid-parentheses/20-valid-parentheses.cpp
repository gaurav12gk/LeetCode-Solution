class Solution {
public:
    bool isValid(string sr) {
        stack<char> s;
        for(auto c: sr)
        {
         if(c=='(' or c=='{' or c=='[')
          {   s.push(c);continue;}
            else if(s.empty())return false;
            else{
                switch(c)
                {
            
              case ')' : if(s.top()!='(')return false;
                        else s.pop();
                        break;
               case '}' : if(s.top()!='{')return false; 
                        else s.pop();
                        break;
                case ']': if(s.top()!='[')return false;
                        else s.pop();
                        break;
                }
            }
                        
        
       
        
    } return s.empty();
    }
};