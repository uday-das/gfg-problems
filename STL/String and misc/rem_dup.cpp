// Remove Duplicates

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    string removeDups(string S)
    {
        string str = "";
        int count[256] = {0};                           // For 256 characters 
        for (int i = 0; i < S.length(); i++)
        {
            count[S[i]]++;
            if (count[S[i]] <= 1)
                str += S[i];
        }

        return str;
    }
};

// { Driver Code Starts.

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.removeDups(s) << "\n";
    }

    return 0;
} // } Driver Code Ends