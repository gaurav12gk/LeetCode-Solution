class Solution {
public:
 
    vector<int> sequentialDigits(int low, int high) {
        
        vector<int> paths;
        vector<int> numbers={1,2,3,4,5,6,7,8};
        for(int i = 0 ;i<numbers.size();i++)
        {
            long long k = numbers[i];
            while(k<=high)
            {
                bool isReachnine  = false;
                for(int j = numbers[i]+1;j<=9;j++)
                {
                    k=(long long)k*10+j;
                    if(k>=low and k<=high)paths.push_back(k);
                    if(j==9 and k<high)isReachnine = true;
                }
                if(isReachnine)break;
            }
        }
        sort(paths.begin(),paths.end());
        return paths;
    }
};