// 1. Sort and reverse

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

/*
V: container having N elements
*/
void sortAndReverse(vector<int> &V)
{
    sort(V.begin(), V.end(), greater <int>());
}

// { Driver Code Starts.

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n; 
        
        vector<int> V(n);
        for(int i = 0; i < n; i++)
            cin>>V[i];
        
        sortAndReverse(V);
        for(auto itr = V.begin(); itr != V.end(); itr++)
            cout << *itr << " ";
        cout << endl;
    }
}
  // } Driver Code Ends
