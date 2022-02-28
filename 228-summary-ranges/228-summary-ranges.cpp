class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
 
        vector<string> ans;
        if(nums.size()==1)return {to_string(nums[0])};
        for(int i = 0;i<nums.size();i++)
        {
                 string pre = to_string(nums[i]) ; 
            while(i<nums.size()-1 and nums[i]+1==nums[i+1])
            {
                i++;
            }
            if(pre == to_string(nums[i])){ans.push_back(pre);continue;}
            string temp = "";
            temp+=pre;
            temp+="->";
            temp+=to_string(nums[i]);
         //   cout<<temp<<endl;
            ans.push_back(temp);
            
        }
        return ans;
    }
};