class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)return false;
      
        bool dec =false;
      if(arr[0]>=arr[1])return false;
        
        for(int i = 1 ;i<arr.size();i++)
        {
            while(i<arr.size() and arr[i] > arr[i-1])i++;
            while(i< arr.size() and arr[i] < arr[i-1]){i++;dec = true;}
            
            if(i!=arr.size() or i>arr.size() or !dec)return false;
        }
     
        return true;
    }
};