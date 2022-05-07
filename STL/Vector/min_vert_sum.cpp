// Minimum Vertical Sum

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

int minimum_vertical_sum(vector<vector<int>> v)
{
    int maxVec = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].size() > maxVec)
            maxVec = v[i].size();
    }

    vector<int> sumX(maxVec, 0);

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            sumX[j] += v[i][j];
        }
    }

    return *min_element(sumX.begin(), sumX.end());
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
        vector<vector<int>> v;
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            vector<int> temp;
            for (int j = 0; j < m; j++)
            {
                int k;
                cin >> k;
                temp.push_back(k);
            }
            v.push_back(temp);
        }
        int min_sum = minimum_vertical_sum(v);
        cout << min_sum << endl;
    }
    return 0;
}
// } Driver Code Ends