// Digital Root

// Initial Template for C++

#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
    // complete the function
public:
    static int digitalRoot(int n)
    {
        // add your code here
        int root = n < 10 ? n : n % 10 + digitalRoot(n / 10);

        return root < 10 ? root : root % 10 + digitalRoot(root / 10);
    }
};

// { Driver Code Starts.

int main()
{
    int T;
    cin >> T; // taking testcases
    while (T--)
    {
        int n;
        cin >> n; // taking number n

        // calling digitalRoot() function
        Solution obj;
        cout << obj.digitalRoot(n) << endl;
    }
    return 0;
} // } Driver Code Ends