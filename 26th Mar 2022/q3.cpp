// 3. Product of maximum in first array and minimum in second

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long find_multiplication(int a[], int b[], int n, int m)
    {
        long long max = INT_MIN;
        long long min = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            if(a[i] > max)
                max = a[i];
        }
        for(int i = 0; i < m; i++)
        {
            if(b[i] < min)
                min = b[i];
        }
        return min*max;
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
        int a[n];
        for(int i=0;i<n;i++)    cin>>a[i];
        
        int m;
        cin>>m;
        int b[m];
        for(int i=0;i<m;i++)    cin>>b[i];
        
        
        Solution ob;
        cout<<ob.find_multiplication(a, b, n, m)<<endl;

    }
    return 0;
}  // } Driver Code Ends




