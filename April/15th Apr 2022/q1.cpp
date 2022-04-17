// 1. Maximize Number of Toys

// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Your code here
    int max_toys(int arr[], int n, int k)
    {
        priority_queue <int, vector <int>, greater <int>> pq(arr, arr + n);                 // making min heap from given array
        int res = 0;
        while(k >= 0 && !pq.empty() && k >= pq.top())
        {
            k = k - pq.top();
            pq.pop();
            res++;
        }
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
        int arr[n];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int k;
        cin>>k;
        Solution ob;
        cout<< ob.max_toys(arr, n, k)<<endl;
    }
    return 0;
}



  // } Driver Code Ends
