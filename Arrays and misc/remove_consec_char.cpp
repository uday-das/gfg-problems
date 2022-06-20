// Remove Consecutive Characters

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    string removeConsecutiveCharacter(string S)
    {
        string str;
        stack<char> st1;
        stack<char> st2;
        st1.push(S[0]);
        for (int i = 0; i < S.length(); i++)
        {
            if (st1.top() == S[i])
                continue;
            else
                st1.push(S[i]);
        }
        while (!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
        while (!st2.empty())
        {
            str += st2.top();
            st2.pop();
        }
        return str;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.removeConsecutiveCharacter(s) << endl;
    }
}

// } Driver Code Ends