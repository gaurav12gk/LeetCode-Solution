class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b)
    {
   if(a[0] == b[0])return a[1] > b[1]  ;
       return a[0] < b[0];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        //similar to merge Intervals
        sort(points.begin(),points.end(),cmp);
            int cntIntervals = 1 ; 
        
        pair<int,int> interval = {points[0][0],points[0][1]};
        
    
        for(int i = 1;i<points.size();i++)
        {
            if(points[i][0] > interval.second)
            {
                cntIntervals++;
                interval = {points[i][0] , points[i][1]};
                
            }
 interval  ={max(interval.first,points[i][0]),min(interval.second,points[i][1])};
        }
        return cntIntervals;
    }
};