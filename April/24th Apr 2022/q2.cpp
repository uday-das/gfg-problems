// 2. Count only Repeated 

// { Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to find repeated element and its frequency.
    pair<int, int> findRepeating(int *a, int n)
    {
        pair<int, int> p, pt;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (mp[a[i]] > 1)
            {
                p.first = a[i];
                p.second = mp[a[i]];
                return p;
            }
        }
        pt.first = -1;
        pt.second = -1;
        return pt;
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
        pair<int, int> ans = obj.findRepeating(arr, n);

        cout << ans.first << " " << ans.second << endl;
    }

} // } Driver Code Ends
