class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b)
    {
       return a[0] < b[0];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
      
        sort(points.begin(),points.end(),cmp);
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