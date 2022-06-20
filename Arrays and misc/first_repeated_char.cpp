// Find first repeated character

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << firstRepChar(s) << endl;
    }
    return 0;
} // } Driver Code Ends

string firstRepChar(string s)
{
    string st;
    unordered_map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
        if (mp[s[i]] > 1)
        {
            st = s[i];
            return st;
        }
    }
    return "-1";
}