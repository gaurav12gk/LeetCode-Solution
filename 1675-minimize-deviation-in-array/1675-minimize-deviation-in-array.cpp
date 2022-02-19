class Solution {
public:
    int minimumDeviation(vector<int>& nums) {   
        set<int> s;
        for(auto i: nums) s.insert(i); //insert everything into a set
        int dev= *s.rbegin()-*s.begin(); //difference between max and min
        for(auto i: nums) if(i&1){ s.erase(i);s.insert(i<<=1);} //remove all odds, add 2*odd
        while(!((*s.rbegin())&1)){ //while last element does not become odd
            int a=(*s.rbegin());
            s.erase(a); //remove last
            s.insert(a>>=1); //insert last/2
            dev=min(dev,*s.rbegin()-*s.begin()); //update min deviation
        }
        return dev;
    }
};