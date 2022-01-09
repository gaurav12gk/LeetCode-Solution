class Solution {
public:
    bool isRobotBounded(string instructions) {
      int x = 0 , y = 0 ;
        char dir ='e';
        for(auto c: instructions)
        {
          if(c=='G') {
             switch(dir)
             {
                 case 'n': y++;
                     break;
                 case 'e' : x++;
                     break;
                 case 's' : y--;
                     break;
                 case 'w': x--;
                     break;
             }
          }
            else if(c=='L')
            {
                  switch(dir)
             {
                 case 'n': dir = 'w';
                     break;
                 case 'e' : dir = 'n';
                     break;
                 case 's' : dir = 'e';
                     break;
                 case 'w': dir = 's';
                     break;
             }
            }
            else{
                  switch(dir)
             {
                 case 'n': dir = 'e';
                     break;
                 case 'e' : dir = 's';
                     break;
                 case 's' : dir ='w';
                     break;
                 case 'w': dir ='n';
                     break;
             }
            }
        }
        
        if(x==0 and y==0 or dir!='e' )return true; 
        return false;
    }
};