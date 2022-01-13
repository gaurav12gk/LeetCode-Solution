
class Solution {
public:

    int findMinArrowShots(vector<vector<int>>& points) {
      
 sort(points.begin(), points.end(), [] (auto &p1, auto&p2) {
            return p1[1] < p2[1];
        });
            int cntIntervals = 1 ; 
        
       int mine = points[0][0];
        int maxe =points[0][1];
        
    
        for(int i = 1;i<points.size();i++)
        {
            if(points[i][0] > maxe)
            {
                cntIntervals++;
         mine = points[i][0];
         maxe =points[i][1];
        
            
            }
             mine =max(mine,points[i][0]);
         maxe =min(maxe,points[i][1]);
        }
        return cntIntervals;
    }
};