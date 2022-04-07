// 1. Josephus Circle using List

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

int josephus(int n, int k)
{
    list<int> l;
    for (int i = 1; i <= n; i++)                    // 1 to n due to test cases
    {
        l.push_back(i);
    }

    auto it = l.begin();
    while (l.size() > 1)
    {
        for (int i = 1; i <= k - 1; i++)
        {
            it++;
            if (it == l.end())
                it = l.begin();
        }
        it = l.erase(it);
        if (it == l.end())
            it = l.begin();
    }
    return *l.begin();
}

// { Driver Code Starts.

int main()
{

    int t;
    cin >> t;

    while (t-- > 0)
    {
        int n, k;
        cin >> n >> k;

        cout << josephus(n, k) << "\n";
    }

    return 0;
} // } Driver Code Ends