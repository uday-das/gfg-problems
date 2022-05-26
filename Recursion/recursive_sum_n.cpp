// Recursively Sum N Numbers

// { Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int recursiveSum(int N)
    {
        if (N == 0)
            return 0;
        return recursiveSum(N - 1) + N;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.recursiveSum(N) << endl;
    }
    return 0;
} // } Driver Code Ends