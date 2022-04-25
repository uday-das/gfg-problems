// 1. Unordered Set Find Duplicate

// { Driver Code Starts
// Initial Template for C++

// Find duplicate from an array using unordered_set
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// Complete the function
void DuplicateMe(int arr[], int n)
{
    unordered_set<int> s;
    unordered_set<int> stmp;
    for (int i = 0; i < n; i++)
    {
        if (s.find(arr[i]) == s.end())
            s.insert(arr[i]);
        else
            stmp.insert(arr[i]); // duplicates
    }

    for (auto i : stmp)
    {
        cout << i << " ";
    }
}

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
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        DuplicateMe(arr, n);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
