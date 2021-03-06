// 1. C++ Visible Numbers

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    vector<int> compute(int arr[], int n)
    {
        sort(arr, arr + n);
        vector<int> v;
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        for (auto i : mp)
        {
            if (i.second > (n / 3))
                v.push_back(i.first);
        }
        return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
            cin >> arr[j];

        vector<int> v;
        Solution ob;
        v = ob.compute(arr, n);
        if (v.size() == 0)
            v.push_back(-1);
        for (int i : v)
            cout << i << " ";

        cout << endl;
    }
    return 0;
}
// } Driver Code Ends