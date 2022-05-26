// Square root of a number

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution
{
public:
    long long int floorSqrt(long long int x)
    {
        int t = sqrt(x);
        if (x % t == 0)
            return t;
        else
            return t;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}
// } Driver Code Ends