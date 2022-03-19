// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
       priority_queue<long long,vector<long long> ,greater<long long>> q;
       
       long long cost = 0; 
       
      for(int i =0;i<n;i++)
    
       q.push(arr[i]);
       
       cost = 0;
       long long cur = 0;
     
       
       while(q.size()>1)
       {
           cur = q.top();
           q.pop();
           cur+=q.top();
           q.pop();
           q.push(cur);
           cost+=cur;
          // cout<<cur<<endl;
        //   
       }
       return cost;
       
    }
};


// { Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends