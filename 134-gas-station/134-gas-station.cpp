class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int ans = 0 ,fuelrem= 0 , deficit = 0 ; 
        for(int i  =0 ;i< gas.size();i++)
        {
            fuelrem+=gas[i]- cost[i]; 
            if(fuelrem<0)
            {
                deficit+=fuelrem; 
                ans = i+1;
                fuelrem= 0 ;
            }
            
        }
        return deficit+fuelrem>=0 ? ans:-1;
    }
};