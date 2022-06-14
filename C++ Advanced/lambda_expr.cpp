// Lambda Expression in C++

// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        // } Driver Code Ends
        // User function Template for C++

        // complete auto square
        auto square = [](int x)
        { return x * x; };

        // { Driver Code Starts.

        cout << square(x) << endl;
    }

} // } Driver Code Ends