// 2. C++ Operators | Set 1 (Arithmetic)

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> cppOperators(int A, int B)
    {
        vector<int> v;
        v.push_back(A + B);
        v.push_back(A * B);
        if (B >= A)
        {
            v.push_back(B - A);
            v.push_back(B / A);
        }
        else if (A > B)
        {
            v.push_back(A - B);
            v.push_back(A / B);
        }
        return v;
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
        vector<int> ans = ob.cppOperators(A, B);
        for (int u : ans)
            cout << u << "\n";
    }
} // } Driver Code Ends