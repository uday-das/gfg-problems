// 4. upper and lower bounds of an element

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int upBound(vector<int> v, int k)
{
    auto it = upper_bound(v.begin(), v.end(), k);
    return *it;
}

int lowBound(vector<int> v, int k)
{
    auto it = lower_bound(v.begin(), v.end(), k);
    return *it;
}


// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x;
        cin>>n>>k;
        
        vector<int> V(n);
        for(int i = 0; i < n; i++)
        {
            
            cin>>x;
            V[i] = x;
        }
        
        cout << upBound(V, k) << " " << lowBound(V, k)<<endl;;
        
    }
    return 0;
}

  // } Driver Code Ends