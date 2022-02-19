class Solution {
public:
   
    
    vector<long long> maximumEvenSplit(long long sum) {
        vector<long long> r; 
        if(sum&1)return r; 
    
        for(int i = 2;i<=sum;i+=2)
        {
            r.push_back(i);
            sum-=i;
        }
        sum+=r.back();
        r.pop_back();
        r.push_back(sum);
       
        return r;
    }
};