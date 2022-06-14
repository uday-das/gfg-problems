// C++ Exception Handling

// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int maxValue(int A, int B)
    {
        int sum, diff, prod, quo;
        try
        {
            if (B == 0)
                throw -999999;

            sum = A + B;
            diff = A - B;
            prod = A * B;
            quo = A / B;

            if (sum > diff && sum > prod && sum > quo)
            {
                throw sum;
            }
            else if (diff > prod && diff > quo)
            {
                return diff;
            }
            else if (prod > quo)
            {
                return prod;
            }
            else
                throw quo;
        }

        catch (int a)
        {
            return a;
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
        int A, B;
        cin >> A >> B;

        Solution ob;
        int ans = ob.maxValue(A, B);
        if (ans == -999999)
            cout << "inf\n";
        else
            cout << ans << "\n";
    }
    return 0;
} // } Driver Code Ends