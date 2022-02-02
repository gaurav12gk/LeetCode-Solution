// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long> s; 
        vector<long long> res;
        for(int i = n-1;i>=0;i--)
        {
            if(s.size()==0)
            {
                res.push_back(-1);
            
                s.push(arr[i]);
            }
            //If top of stack is greater than the number
            if(s.top()>arr[i])
            {
                res.push_back(s.top());
                s.push(arr[i]);
            }
            else if(s.top()<arr[i])
            {
                while(s.size())
                {
                    if(s.top()>arr[i]){
                    res.push_back(s.top()),s.push(arr[i]);
                        break;
                    }
                    s.pop();
                }
                if(s.size()==0){
                    res.push_back(-1);
                    s.push(arr[i]);
                }
            }
            
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends