class Solution {
public:
    void nextPermutation(vector<int>& v) {
        int idx = -1;
        int n = v.size();
        for(int i =n-2;i>=0;i--)
        {
            if(v[i] < v[i+1])
            {
                idx = i;
                break;
            }
        }
       // cout<<idx;
        if(idx<0)
        {
            reverse(v.begin(),v.end());
            return;
        }
        else{
           for(int i = n-1;i>=0;i--)
               
           {
               if(v[i] > v[idx])
               {
                   swap(v[i],v[idx]);
                   reverse(v.begin()+idx+1,v.end());
                   break;
               }
           }
        }return;
    }
};