// Marks Allotment

// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int marks(int A)
    {
        try
        {
            if (!(A >= 0 && A <= 100))
            {
                throw -1;
            }
            return A;
        }
        catch (int n)
        {
            return n;
        }
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A;
        cin >> A;

        Solution ob;
        int ans = ob.marks(A);

        cout << ans << "\n";
    }
    return 0;
} // } Driver Code Ends