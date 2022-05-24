// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    void printArr(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void setToZero(int a[], int n)
    {
        memset(a, 0, n * sizeof(int));
    }

    void xor1ToN(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i] ^ i;
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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution obj;
        obj.xor1ToN(arr, n);
        obj.printArr(arr, n);
        obj.setToZero(arr, n);
        obj.printArr(arr, n);
    }
    return 0;
}

// } Driver Code Ends