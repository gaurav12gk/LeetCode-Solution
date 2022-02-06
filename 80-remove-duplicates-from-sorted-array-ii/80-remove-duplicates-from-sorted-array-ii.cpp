class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        int n = v.size();
      int left = 1 , right = 1; 
            int cnt = 1; 
            while(right< n)
            {
                if(v[right]==v[right-1])
                {
                    if(cnt < 2)
                    {
                        v[left++] = v[right];
                        cnt++;
                    }
                }
                else{
                    cnt = 1;
                    v[left++] = v[right];
                }
                right++;
            }
            return left;
    }
};