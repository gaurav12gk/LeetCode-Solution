class Solution {
public:

    void reverseString(vector<char>& st) {
     
       for(int i =0 ;i<st.size()/2;i++)
       {
           swap(st[i],st[st.size()-i-1]);
       }
    }
};