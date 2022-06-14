// Sort in Descending

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        int integer_value;
        for (int i = 0; i < n; i++)
        {
            cin >> integer_value;
            v.push_back(integer_value);
        }

        // } Driver Code Ends
        // User function Template for C++

        // complete its third parameter
        sort(v.begin(), v.end(), [](int a, int b)
             { return a > b; });

        // { Driver Code Starts.

        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

} // } Driver Code Ends