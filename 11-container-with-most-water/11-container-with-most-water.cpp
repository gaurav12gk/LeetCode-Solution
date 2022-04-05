class Solution {
public:
    int maxArea(vector<int>& height) {
        int left =0;
        int right = height.size()-1;
       long long maxArea = 0 ;
        while(right > left)
        {  
            int a =  min(height[left],height[right])*(right  - left);
            if(maxArea <  a)
            maxArea = a;
            if(height[left]>height[right])
            {
            right--;    
            }
            else left++;
        }
    return maxArea;
    }
};