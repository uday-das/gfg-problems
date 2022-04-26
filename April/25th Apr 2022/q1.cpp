// 1. Tie Breaker

// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    string TieBreak(string names[], int n)
    {
        string res;
        unordered_map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[names[i]]++;
        }
        int max = INT_MIN;
        for (auto i : mp)
        {
            if (i.second > max)
            {
                max = i.second;
                res = i.first;
            }
            else if (i.second == max && i.first < res)
            {
                res = i.first;
            }
        }
        return res;
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

        string names[n];
        for (int i = 0; i < n; i++)
            cin >> names[i];
        Solution ob;
        cout << ob.TieBreak(names, n) << endl;
    }
}
// } Driver Code Ends