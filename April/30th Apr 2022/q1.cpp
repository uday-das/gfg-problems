// 1. Sorting Elements of an Array by Frequency

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    static bool mycmp(pair<int, int> p1, pair<int, int> p2)
    {
        if (p1.second == p2.second) // if freq same, smaller key to be considered
            return p1.first < p2.first;
        return p1.second > p2.second; // if freq is diff, greater freq to be considered
    }

    vector<int> sortByFreq(int a[], int n)
    {
        vector<int> vec;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[a[i]]++;
        }
        vector<pair<int, int>> v(m.begin(), m.end());

        sort(v.begin(), v.end(), mycmp);

        for (auto i : v)
        {
            for (int j = 0; j < i.second; j++)
                vec.push_back(i.first);
        }
        return vec;
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

        int a[n + 1];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(a, n);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends