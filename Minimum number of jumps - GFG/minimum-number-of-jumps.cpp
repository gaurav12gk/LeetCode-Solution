// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int curMx = 0 , jump = 0 , curReach = 0 ; 
        
        for(int i = 0 ;i<n-1;i++)
        {
            curMx= max(curMx,i+arr[i]);
            
            if(i==curReach)
            {
                jump++;
                curReach = curMx;
            }
            if(curReach >= n-1)break;
        }
        if(curReach < n-1)return -1;
        return jump;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends