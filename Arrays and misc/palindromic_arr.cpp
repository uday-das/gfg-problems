// Palindromic Array

// { Driver Code Starts
#include <iostream>
#include <string.h>
using namespace std;

// } Driver Code Ends
/*Complete the function below*/

class Solution
{
public:
    int PalinArray(int a[], int n)
    {
        int remaind, revised, x;
        for (int i = 0; i < n; i++)
        {
            revised = 0;
            x = a[i];
            while (x != 0)
            {
                remaind = x % 10;
                revised = revised * 10 + remaind;
                x = x / 10;
            }
            if (revised != a[i])
                return 0;
        }
        return 1;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.PalinArray(a, n) << endl;
    }
} // } Driver Code Ends