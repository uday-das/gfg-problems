// 3. Print Different Characters In Sorted Manner 

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// Complete this function
string Sorted_Characters(string str)
{
    string st = "";
    set<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        s.insert(str[i]);
    }
    for (auto i : s)
    {
        st = st + i;
    }
    return st;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string str;
        cin >> str;

        string result;
        result = Sorted_Characters(str);
        cout << result;

        cout << endl;
    }
    return 0;
} // } Driver Code Ends
